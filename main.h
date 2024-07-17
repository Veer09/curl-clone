#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>
#include <stdio.h>
#include <string.h>
#include <arpa/inet.h>

struct addrinfo* getAddrInfo(char* host, int port = 80){
    int status;
    struct addrinfo hint;
    struct addrinfo* res;

    memset(&hint, 0, sizeof(hint));
    hint.ai_family = AF_UNSPEC;
    hint.ai_socktype = SOCK_STREAM;

    char* s_port;
    snprintf(s_port, sizeof(port), "%d", port);
    if((status = getaddrinfo(host, s_port, &hint, &res)) != 0){
        fprintf(stderr, gai_strerror(status));
    }

    return res;
}