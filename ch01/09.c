#include <stdio.h>

int main(void)
{
  int c;
  int blank = 0;
  while((c = getchar()) != EOF) {
    if (c == ' ') blank = 1;
    else {
      if (blank) putchar(' ');
      putchar(c);
      blank = 0;
    }
  }
  return 0;
}
