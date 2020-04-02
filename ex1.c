#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>

#define BUFSIZE 101

int main(int argc, char **argv) {
  int i, fd, n;
  char buf[BUFSIZE];
  printf("hello world\n");
  for(i = 1; i < argc; i++) {
    printf("%s\n", argv[i]);
  }

  if(argc < 2) {
    return 0;
  }

  memset(buf, 0, BUFSIZE);
  if ((fd = open(argv[1], O_RDONLY)) < 0) {
    printf("Error happened\n");
    return 1;
  }
  while((n = read(fd, buf, BUFSIZE-1)) > 0) {
    printf("%s", buf);
    memset(buf, 0, BUFSIZE);
  }
  printf("\n");
  printf("%d\n", n);
  return 0;
}
