#include <stdio.h>

int main(){
  int numb1,numb2;
  printf("Введите десятичное число\n");
  scanf("%d",&numb1);
  printf("Восьмеричное представление первого числа: %o\n",numb1);
  printf("Со сдвигом влево на один бит: %o\n",numb1<<1);
  printf("Введите восьмеричное число\n");
  scanf("%o",&numb2);
  printf("XOR для первого и второго чисел в 8-ричной системе: %o\n",numb1^numb2);
}
