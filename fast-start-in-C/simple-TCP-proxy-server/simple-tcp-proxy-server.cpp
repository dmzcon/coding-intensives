// SIMPLE TCP-PROXY on C to understand networking programming and to be able to find simple vulnerabilities
//
// There are vulnerabilities in this code-sample. Are you able to find them all ?
//
// AND SOME ADVERTISEMENT HERE:
//
// DMZCON-2023, international cyber secirity conference
// "PURPLE-TEAM BOOTCAMP" events for experts
// "FAST START" MARATHON for those who just starts in Cyber Security
// "CISO TALKS" for CISOs and Cyber security managers
//
// www.dmzcon.com
//
// live.dmzcon.com
//
// t.me/dmzconunited
//

#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <stdio.h>
#include <string.h>

int main() {
        int in_sock, listener,out_sock;
        struct sockaddr_in listen_addr;
        struct sockaddr_in con_addr;
        char buf[50000] = {0};
        int bytes_read;


        listener = socket(AF_INET, SOCK_STREAM, 0);

        if(listener < 0) {
                printf("Socket call failure\n");
                return 1;
        }
        printf("Socket call OK\n");

        listen_addr.sin_family = AF_INET;
        listen_addr.sin_port = htons(50000);
        listen_addr.sin_addr.s_addr = htonl(INADDR_ANY);
        if(bind(listener, (struct sockaddr *)&listen_addr, sizeof(listen_addr)) < 0) {
                printf("Bind call failure (may be the port is busy?)");
                return 2;
        }
        printf("Bind call OK\n");

        listen(listener, 10);
        printf("Listen call OK.\nNow we start the blocking-call 'accept'\n");

        in_sock = accept(listener,NULL, NULL);

        printf("Return from the blocking-call. Let's check the socket\n");

        if(in_sock <0) {
                printf("Looks like a failure happened\n");
                return 3;
        }
        printf("Everything is OK, we got a new connection from TCP-client side\n");


// At the moment we are sellers and we have a request a buyer
// We like a shop

        bytes_read = recv(in_sock, buf, 50000, 0);

        printf("We got %d bytes from TCP-client (Do you see any vulnerabilities here?:)\n. The reply from client-side:\n",bytes_read);

        for(int i=0; i<bytes_read;i++) {
                printf("%c",buf[i]);
        }

// Yep, we like a shop, but we have no good, so we go to another shop:)))

// Now let's connect with the remote server (because we are proxy)

        out_sock = socket(AF_INET, SOCK_STREAM, 0);

        if(out_sock < 0) {
                printf("Socket call failure\n");
                return 1;
        }

        con_addr.sin_family = AF_INET;
        con_addr.sin_port = htons(80); // some remote PORT
        con_addr.sin_addr.s_addr = htonl(INADDR_LOOPBACK); // some remote IP-address

        if(connect(out_sock, (struct sockaddr *)&con_addr, sizeof(con_addr)) < 0) {
                printf("Connect failurre\n");
                return 2;
        }

// going to the shop:))

        send(out_sock, buf,bytes_read, 0);

        sleep(1);
        memset(buf,0,50000);

// buying goods in the shop (at the moment we are buyers)

        bytes_read = recv(out_sock, buf, 50000, 0);
        printf("\nGot %d bytes. The reply is the following:\n",bytes_read);

        for(int i=0; i<bytes_read;i++) {
                printf("%c",buf[i]);
        }

// We are the SHOP again and we send the GOODs to our buyer

        send(in_sock, buf, bytes_read, 0);

        sleep(2);

        shutdown(in_sock,2);
        shutdown(out_sock,2);


return 0;

}

