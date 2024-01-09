#include <stdio.h>

int main(void) {
  char str[] = "hello";
  int i;
  for (i = 0; i < 5; i++) {
    printf("%d", str[i]);
  }

  return 0;
}