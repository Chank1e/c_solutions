#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
  char number[][10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
  int a;
  float b,c;
  printf("Enter call duration, the amount of monthly fee and the cost of a minute over the limit:\n");
  scanf("%d%f%f",&a,&b,&c);
  if (a>499) printf("%f\n",(a-499)*c+b);
  else printf("%f\n",b);
  printf("Enter number:\n");
  scanf("%d",&a);
  printf("%s",number[a]);
}
