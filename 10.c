#include <stdio.h> 
#include <string.h> 
#define SIZE 81 
#define LIM 20 

void delSpace(char * str); 

int main(void) 
  { 
    int i = 0; 
    char string[LIM][SIZE]; 

    puts("Input text:"); 

    while (i < LIM && gets(string[i]) != NULL && string[i][0] != '\0'){ 
      delSpace(string[i]); 
      puts(string[i]); 
      i++; 
      } 
    int a,f; 
    f=0; 
    scanf("%d",&a); 
    while(a>0) { 
      f=f+a%10; 
      a=a/10; 
      } 
    printf("%d",f); 
   } 
    void delSpace(char * str) { 
    int i, j; 
    int len = strlen(str); 

    for (i = 0, j = 0; i < len; i++) 
    if (str[i] != ' ') 
    str[j++] = str[i]; 
    str[j] = '\0'; 
  }
