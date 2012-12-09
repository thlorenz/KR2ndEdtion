#include <stdio.h>
#define MAXLINE 1000

int getLine(char line[], int maxline);
void copy(char to[], char from[]);

int main(int argc, const char *argv[])
{
  int len;
  int max;
  char line[MAXLINE];
  char longest[MAXLINE];

  max = 0;
  while ((len = getLine(line, MAXLINE)) > 0) {
    if (len > max) {
      max = len;
      copy(longest, line);
    }
  }
  if (max) printf("%s", longest);
  return 0;
}

int getLine(char line[], int limit)
{
  int c, i;
  for (i = 0; i < limit - 1 && (c = getchar()) != EOF && c != '\n'; i++)
    line[i] = c;

  // encountered line terminator (not EOF)
  if (c == '\n') {
    line[i] = c;
    ++i;
  }
  // EOF
  line[i] = '\0';

  return i;
}

void copy(char to[], char from[])
{
  int i = 0;
  for (; (to[i] = from[i]) != '\0'; i++);
}
