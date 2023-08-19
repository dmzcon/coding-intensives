#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main(int argc,char *argv[]) {
  int i;
  i = fork();

  printf("fork returned %d\n",i);

  if(i==0) {
     printf("I'm child\n");
     execv("/bin/pwd",argv);
  } else {
     printf("I'm parent\n");
  }

  while(1) {
    sleep(1);
  }
  return 0;
}
