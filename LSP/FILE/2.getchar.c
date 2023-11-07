#include <stdio.h>

int my_getchar(void) {
  unsigned char c;
  if (read(0, &c, 1) != 1) {
    return EOF;
  }
  return c;
}

int main(void) {
  int c;

  while ((c = my_getchar()) != EOF) {
    putchar(c);
  }

  return 0;
}
