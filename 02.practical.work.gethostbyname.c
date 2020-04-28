#include <stdio.h>
#include <netdb.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <stdlib.h>

int main() {
    char hostname[128];
    printf("Enter: ");
    scanf("%s", hostname);

    struct hostent *h = gethostbyname(hostname);
    char *ip = inet_ntoa(*((struct in_addr*) h->h_addr_list[0]));
    printf("%s ip is: %s\n", hostname, ip);
    return 0;
}