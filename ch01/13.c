#include <stdio.h>

#define IN  1
#define OUT 0

void drawBar (len) {
  for (int i = 0; i < len; i++) {
    putchar('#');
  }
  putchar('\n');
}

int main(void)
{
  int c, whitespace;
  int state = OUT;
  int len = 0;

  while ((c = getchar()) != EOF) {
    whitespace = (c == '\t' || c == '\n' || c == ' ');
    if (whitespace && state == IN) {
      state = OUT;
      drawBar(len);
      len = 0;
    } else {
      state = IN;
      len++;
    }
  }
  return 0;
}
