#include <stdio.h>

#define NUM_CHARS 256

void initHash(long hash[])
{
  for (int i = 0; i < NUM_CHARS; i++) {
    hash[i] =0;
  }
}

// need to pass s here  since we aren't allowed to pass reference to local var back
char* makeVisible (char c, char * s)
{
  switch (c) {
    case '\n': return "\\n";
    case '\t': return "\\t";
    case '\b': return "\\b";
    case '\\': return "\\\\";
    default: return s;
  }
}

void drawBar(c, len)
{
  if (len == 0) return;

  char s[] = { c, '\0' };
  printf("%s: ", makeVisible(c, s));
  for (int i = 0; i < len; i++) {
    putchar('#');
  }
  putchar('\n');
}

void drawBars(long hash[])
{
  int count;
  for (long i = 0; i < NUM_CHARS; i++) {
    count = hash[i];
    drawBar(i, count);
  }
}

int main(void)
{
  long hash[NUM_CHARS + 1];
  int c;

  initHash(hash);
  while ((c = getchar()) != EOF) {
    hash[c]++;
  }

  drawBars(hash);

  return 0;
}
