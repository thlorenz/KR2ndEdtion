#include <stdio.h>
#define MAXLINE 1000

int trim_line(char s[], int len)
{
  int c, i;
  for (i = len - 1; i > 0; i--) {
    c = s[i];
    if (c == '\t' || c == ' ' || c == '\n') s[i] = '\0';
    else break;
  }
  return i;
}

int main(int argc, const char *argv[])
{

  char *line = NULL;
  size_t linecap = MAXLINE;
  ssize_t len;

  while((len = getline(&line, &linecap, stdin)) > 0)
    if (trim_line(line, len) > 0) printf("[%s]\n", line);

  return 0;
}
