#include <stdio.h>

int main(void) {
  char str[] = "hello";
  int i;

  printf("%s\n", str);

  for (i = 0; str[i] != '\0'; i++)
    ;
  printf("%d", i);

  return 0;
}