#include <stdio.h>

int main(){
  int min=20;
  int max=30;
  int numb;
  scanf("%d",&numb);
  if(numb<max && numb>min){
    printf("Входит в диапазон\n");
  } else {
    printf("Не входит в диапазон\n");
  }

  int sec_num,res;
  int _bit=17;
  scanf("%o",&sec_num);
  res = sec_num>>_bit&1;
  printf("%d\n",res);
  return 0;
}﻿
