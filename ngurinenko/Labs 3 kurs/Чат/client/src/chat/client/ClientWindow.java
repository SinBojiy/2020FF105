package chat.client;

import chat.network.TCPConnection;
import chat.network.TCPConnectionListener;

import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.io.IOException;

public class ClientWindow extends JFrame implements ActionListener, TCPConnectionListener {

    private static final String IP_ADDR = "192.168.0.1";
    private static final int PORT = 1234;
    private static final int WIDTH = 600;
    private static final int HEIGHT = 400;

    public static void main(String[] args) {
        SwingUtilities.invokeLater(new Runnable() {
            @Override
            public void run() {
                new ClientWindow();
            }
        });

    }

    private final JTextArea log = new JTextArea();
    private final JTextField fieldNickname = new JTextField("nastya");
    private final JTextField fieldInput = new JTextField();

    private TCPConnection connection;

    private ClientWindow() {// создаем окно
        setDefaultCloseOperation(WindowConstants.EXIT_ON_CLOSE);// закрываем на крестик
        setSize(WIDTH, HEIGHT);// размер окна
        setLocationRelativeTo(null);// по центру окно
        setAlwaysOnTop(true);// окно поверх всех программ

        log.setEditable(false); // запретить редактирование
        log.setLineWrap(true); // перенос слов
        add(log, BorderLayout.CENTER);// добавляем поле для текста в центр

        fieldInput.addActionListener(this);// добавляем себя (для enter)
        add(fieldInput, BorderLayout.SOUTH);// добавляем ввод снизу
        add(fieldNickname, BorderLayout.NORTH);// добавляем ник сверху

        setVisible(true);
        try {
            connection = new TCPConnection(this, IP_ADDR, PORT);
        } catch (IOException e) {
            printMsg("Connection exception: " + e);
        }
    }

    @Override
    public void actionPerformed(ActionEvent e) {
        String msg = fieldInput.getText();
        if (msg.equals("")) return; // если строка пустая
        fieldInput.setText(null);
        connection.sendString(fieldNickname.getText() + ": " + msg);
    }


    @Override
    public void onConnectionReady(TCPConnection tcpConnection) {
        printMsg("Connection ready...");
    }

    @Override
    public void onReceiveString(TCPConnection tcpConnection, String value) {
        printMsg(value);
    }

    @Override
    public void onDisconnect(TCPConnection tcpConnection) {
        printMsg("Connection close...");
    }

    @Override
    public void onException(TCPConnection tcpConnection, Exception e) {
        printMsg("Connection exception: " + e);
    }

    private synchronized void printMsg(String msg) { // обращаемся из разных потоков
        SwingUtilities.invokeLater(new Runnable() {
            @Override
            public void run() {
                log.append((msg + "\n"));
                log.setCaretPosition(log.getDocument().getLength());
            }
        });
    }
}
