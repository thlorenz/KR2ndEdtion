#include <stdio.h>
#define MAXLINE 1000

int getline_(char line[], int lim);

// cat 17.c | ./17
int main(void)
{
  char line[MAXLINE];
  int len;

  while((len = getline_(line, MAXLINE)) > 0)
    // changed 80 to 40 to get results with its own source
    if (len >= 40) printf("%s", line);

  return 0;
}

int getline_(char s[], int lim)
{
  int c, i;
  for(i = 0; i < lim && (c = getchar()) != EOF && c != '\n'; i++) s[i] =c;
  if (c == '\n') s[i++] = c;
  s[i] = '\0';

  return i;
}

