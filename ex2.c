#include <stdio.h>

int main(int argc, char *argv[]) {
  int i;
  printf("Hello World\n");

  if (argc < 2) {
    printf("%s requires at least one argument\n", argv[0]);
    return 1;
  }
  for (i = 0; i < argc; ++i) {
    printf("%s\n", argv[i]);
  }
  return 0;
}
