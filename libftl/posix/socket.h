typedef int SOCKET;

#define SD_RECEIVE SHUT_RD
#define SD_SEND SHUT_WR
#define SD_BOTH SHUT_RDWR

void init_sockets();
int close_socket(SOCKET sock);
char * get_socket_error();
int set_socket_recv_timeout(SOCKET socket, int ms_timeout);
int set_socket_send_timeout(SOCKET socket, int ms_timeout);
int set_socket_enable_keepalive(SOCKET socket);
int get_socket_send_buf(SOCKET socket, int *buffer_space);
int set_socket_send_buf(SOCKET socket, int buffer_space);
int shutdown_socket(SOCKET sock, int how);