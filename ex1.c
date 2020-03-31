#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>

int main(int argc, char **argv) {
  int i, fd, n;
  char buf[101];
  printf("hello world\n");
  for(i = 1; i < argc; i++) {
    printf("%s\n", argv[i]);
  }

  if(argc < 2) {
    return 0;
  }

  memset(buf, 0, 101);
  fd = open(argv[1], O_RDONLY);
  n = read(fd, buf, 100);
  printf("%s\n", buf);
  printf("%d\n", n);
  return 0;
}
