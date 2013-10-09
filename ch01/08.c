#include <stdio.h>

int main(void)
{
  int c, newlines, blanks, tabs;
  newlines = blanks = tabs = 0;

  while((c = getchar()) != EOF) {
          if (c == '\n') newlines++;
    else  if (c == ' ') blanks++;
    else  if (c == '\t') tabs++;
  }
  printf("Newlines: %d, Spaces: %d, Tabs: %d", newlines, blanks, tabs);

  return 0;
}
