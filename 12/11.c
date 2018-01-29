#include <stdio.h> 
#include <string.h>

  void copy(FILE * f1, FILE * f2, FILE * f3) {
    char c;

    while ((c = (char) fgetc(f1)) != EOF) {
      printf("%c", c);
      fputc(c, f3);
    }
    while ((c = (char) fgetc(f2)) != EOF) {
      printf("%c", c);
      fputc(c, f3);
    }

    printf("%c", c);

  }

int main() {
  printf("//Task_3//\n");

  FILE * f1 = fopen("./1.txt", "r");
  FILE * f2 = fopen("./2.txt", "r");
  FILE * f3 = fopen("./3.txt", "w");

  copy(f1, f2, f3);

  fclose(f1);
  fclose(f2);
  fclose(f3);

  return 0;
}