#include <conio.h> 
#include <string.h> 
int main() {
  char string1[100], string2[100], c, * p;
  printf("string 1:\n");
  scanf("%s", & string1);
  printf("string 2:\n");
  scanf("%s ", & string2);
  printf("Zadanie 1 \n");
  printf("%s \n", strcat(string1, string2));
  printf("Zadanie 2 \n");
  printf("%d\n", strncmp(string1, string2, 2));
  printf("Zadanie 3 \n");
  printf("%d\n", strlen(string1));
  printf("Zadanie 4 \n");
  printf("%s \n", strrchr(string1, 'a'));
  printf("Zadanie 5 \n");
  printf("%s\n", strncpy(string1, string2, 2));
  getch();
  return 0;
}
