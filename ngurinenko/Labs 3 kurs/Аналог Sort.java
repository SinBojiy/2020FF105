import java.util.ArrayList;
import java.util.Comparator;
import java.util.List;
import java.util.Scanner;

public class SortImpl {
    public static void main(String[] args) {
        if (args.length < 1) {
            System.out.println("java SortImpl mode");
            System.out.println("mode 0: Программа работает в обычном режиме");
            System.out.println("mode 1: Программа должна игнорировать регистр при сортировке");
            System.out.println("mode 2: Программа должна сортировать не по алфавиту," +
                    " а по количеству символов в строке");
            System.out.println("mode 3: Программа качестве аргумента может получать номер слова в строке," +
                    " по которому надо сортировать строки");
            return;
        }
        List<String> lines = new ArrayList<>();
        Scanner in = new Scanner(System.in);

        while (in.hasNextLine()) {
            lines.add(in.nextLine());
        }

        int mode;
        try {
            mode = Integer.parseInt(args[0]);
        } catch (NumberFormatException e) {
            System.out.println(e.getMessage());
            in.close();
            return;
        }

        switch (mode) {
            case 0:
                lines.sort(String::compareTo);
                break;
            case 1:
                lines.sort(Comparator.comparing(String::toLowerCase));
                break;
            case 2:
                lines.sort(Comparator.comparingInt(String::length));
                break;
            case 3:
                int i;
                try {
                    i = Integer.parseInt(args[1]);
                } catch (NumberFormatException e) {
                    System.out.println(e.getMessage());
                    in.close();
                    return;
                }
                lines.sort((o1, o2) -> {
                    String[] words1 = o1.split("\\s+");
                    String[] words2 = o2.split("\\s+");
                    if (words1.length < i && words2.length < i)
                        return 0;
                    if (words1.length < i)
                        return "".compareTo(words2[i - 1]);
                    if (words2.length < i)
                        return words1[i - 1].compareTo("");
                    return words1[i - 1].compareTo(words2[i - 1]);
                });
                break;
            default:
                System.out.println("No such mode");
        }

        for (String l : lines) {
            System.out.println(l);
        }
        in.close();
    }
}
