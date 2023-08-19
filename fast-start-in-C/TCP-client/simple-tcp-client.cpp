// EXAMPLE OF TCP-CLIENT on C
//
// There are vulnerabilities in this code-sample. Are you able to find them all ?
//
// AND SOME ADVERTISEMENT HERE:
//
// DMZCON-2023, international cyber secirity conference
// PURPLE-TEAM BOOT CAMP events for experts
// FAST START MARATHON for those who just starts in Cyber Security
// CISO TALKS for CISOs and Cyber security managers
//
// www.dmzcon.com
//
// live.dmzcon.com
//
// t.me/dmzconunited
//

#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <stdio.h>
#include <arpa/inet.h>


int main() {
  
    char message[1000]={0x00};

/* EXAMPLE:
    message[0] = 'G';
    message[1] = 'E';
    message[2] = 'T';
    message[3] = ' ';
    message[4] = '/';
    message[5] = ' ';
    message[6] = 'H';
    message[7] = 'T';
    message[8] = 'T';
    message[9] = 'P';
    message[10] = '/';
    message[11] = '1';
    message[12] = '.';
    message[13] = '1';
    message[14] = 0;
    message[15] = 0;
  */  

    char buf[10000];
    struct sockaddr_in box;
    int sock;

    sock = socket(AF_INET, SOCK_STREAM, 0);

    if(sock < 0) {
        printf("socket create error\n");
        return 1;
    }

    box.sin_family = AF_INET;
    box.sin_port = htons(25); //  USE SOME TCP-PORT NUMBER HERE
   
    // Use INADDR_LOOPBACK for 127.0.0.1
    box.sin_addr.s_addr = inet_addr("PUT SOME IP-ADDRESS HERE");

    if(connect(sock, (struct sockaddr *)&box, sizeof(box)) < 0) {
        printf("Connect error. Please check the IP-address inside the cpp file\n");
        return 2;
    }

    // Use your imagination and realize binary exchange you want :)     

   // send(sock, message, 16, 0);

    recv(sock, buf, 500 , 0);
   
    printf(buf);

    // Use your imagination and realize binary exchange you want :)

    // CLOSING TCP-CONNECTION and EXITING

    shutdown(sock,2);
    return 0;
}
