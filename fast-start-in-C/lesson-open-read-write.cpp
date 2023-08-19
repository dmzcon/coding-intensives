// NEVER COMPILE AND NEVER RUN UNKNOWN STRANGE CODE SAMPLES USING 'ROOT' USER
//
// WANT NEW SKILLS AND INSIGHTS ? ATTEND DMZCON-2023, INTERNATIONAL CYBER SECUIRITY CONFERENCE
// www.dmzcon.com
// live.dmzcon.com

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>

int main() {
   int fd;
   int SIZE = 100;
   char buf[SIZE];
   size_t count=SIZE;
   ssize_t res;
   ssize_t res2;
   int flag = O_RDWR;

   fd = open("/etc/passwd", flag);
   if (fd<0) {
      fprintf (stderr, "Cannot open file\n");
      exit (1);
   }
   res=read (fd, buf, count);

   printf("%s\n",buf);

   buf[5]=':';
   buf[6]=')';
   buf[7]=')';

   res2 = write(fd, buf, count);
   return 0;
}
