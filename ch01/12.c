#include <stdio.h>

#define IN  1
#define OUT 0

int main(void)
{
  int c, whitespace;
  int state = OUT;

  while ((c = getchar()) != EOF) {
    whitespace = (c == '\t' || c == '\n' || c == ' ');
    if (whitespace && state == IN) {
      putchar('\n');
      state = OUT;
    } else if (whitespace) {
      // ignore
    } else {
      putchar(c);
      state = IN;
    }
  }

  return 0;
}
