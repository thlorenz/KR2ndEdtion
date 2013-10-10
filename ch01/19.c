#include <stdio.h>
#define MAXLINE 1000

void reverse(char* s, int len)
{
  int l = len -1;
  int mid = l / 2 + l % 2; // round upwards
  int inc, dec;
  char c;

  // start from left and right (before \0)
  for (inc = 0, dec = l; inc < mid; inc++, dec--) {
    c = s[inc];
    s[inc] = s[dec];
    s[dec] = c;
  }
}

int main(int argc, const char *argv[])
{
  char *line = NULL;
  size_t linecap = MAXLINE;
  ssize_t len;

  while((len = getline(&line, &linecap, stdin)) > 0) {
    reverse(line, len);
    printf("%s\n", line);
  }
}
