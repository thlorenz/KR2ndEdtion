#include <stdio.h>

#define NUM_CHARS 256

void initHash(long hash[])
{
  for (int i = 0; i < NUM_CHARS; i++) {
    hash[i] =0;
  }
}

void drawBar(c, len)
{
  if (len == 0) return;

  printf("%c: ", c);
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
