#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>
#include <stdio.h>
#include <string.h>
#include <arpa/inet.h>

//arguments -> 1.url
void main(int argc, char* argv[])
{
    if(argc != 2){
        fprintf(stderr, "No url passed!!");
    }

    char* protocol, host, path, port;
    protocol = strtok(argv[1], "//:");
    
    



}