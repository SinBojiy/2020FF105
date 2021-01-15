package chat.network;

public interface TCPConnectionListener {
    void onConnectionReady(TCPConnection tcpConnection);// подключение
    void onReceiveString(TCPConnection tcpConnection, String value);// можем принять строчку
    void onDisconnect(TCPConnection tcpConnection);// может случиться дисконект
    void onException(TCPConnection tcpConnection, Exception e);// могут встретиться исключения
}
