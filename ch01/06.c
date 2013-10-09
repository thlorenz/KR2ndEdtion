#include <stdio.h>

int main(void)
{
  // echos stdin
  // i.e.: echo 'hello' | ./08 => prints hello

  int c, iseof;
  for (;;) {
    c = getchar();
    iseof = c == EOF;
    printf("iseof: %d\n", iseof);
    if (iseof) break;
  }

  return 0;
}
