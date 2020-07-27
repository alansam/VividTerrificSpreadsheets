#include <stdio.h>
#include <ctype.h>

int main(void) {
  while (!printf("--- %03d ---\n", 10)) {}
  return 0;
  unsigned char c;
  printf("Enter a character: ");
  fflush(stdout);
  scanf("%c", &c);
  printf("Character '%1$c', %1$3d - %1$03o - %1$#02x\n", c);
  putchar('\n');

  for (unsigned char c = ' ', l = 1; !iscntrl(c); ++c, ++l) {
    char * dlm = l % 2 == 0 ? "\n" : " - ";
    printf("Character '%1$c', %1$3d - %1$03o - %1$#02x%2$s", c, dlm);
  }
  putchar('\n');
  putchar('\n');

  return 0;
}
