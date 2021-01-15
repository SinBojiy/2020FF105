import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class GrepImpl {
    public static void main(String[] args) {
        if (args.length < 3) {
            System.out.println("java MyGrep fileName mode patterns");
            System.out.println("mode 0: Программа работает в обычном режиме");
            System.out.println("mode 1: Программа не должна учитывать регистр");
            System.out.println("mode 2: В аргументах может быть передано не одно слово, а несколько");
            System.out.println("mode 3: В качестве аргумента может быть задано не конкретное слово," +
                    " а регулярное выражение");
            return;
        }

        File file;
        Scanner in;
        try {
            file = new File(args[0]);
            in = new Scanner(file);
        } catch (NullPointerException | FileNotFoundException e) {
            System.out.println(e.getMessage());
            return;
        }

        int key;
        try {
            key = Integer.parseInt(args[1]);
        } catch (NumberFormatException e) {
            System.out.println(e.getMessage());
            return;
        }
        String line;
        int lines = 0;

        switch (key) {
            case 0:
                while (in.hasNextLine()) {
                    line = in.nextLine();
                    lines++;

                    if (line.contains(args[2])) {
                        System.out.println(lines + ": " + line);
                    }
                }
                break;
            case 1:
                while (in.hasNextLine()) {
                    line = in.nextLine();
                    lines++;

                    if (line.toLowerCase().contains(args[2].toLowerCase())) {
                        System.out.println(lines + ": " + line);
                    }
                }
                break;
            case 2:
                while (in.hasNextLine()) {
                    line = in.nextLine();
                    lines++;

                    for (int i = 2; i < args.length; i++) {
                        if (line.contains(args[i])) {
                            System.out.println(lines + ": " + line);
                            break;
                        }
                    }
                }
                break;
            case 3:
                String keyWord = args[2];
                while (in.hasNextLine()) {
                    line = in.nextLine();
                    lines++;

                    Pattern p = Pattern.compile(keyWord);
                    Matcher m = p.matcher(line);
                    if (m.find()) {
                        System.out.println(lines + ": " + line);
                    }
                }
                break;
            default:
                System.out.println("No such mode");
        }
        in.close();
    }
}
