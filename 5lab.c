#include <stdio.h>

int main(){
  int length=7;
  int arr[length];
  for(int i=0;i<length;i++){
    scanf("%d",&arr[i]);
  }
  printf("Значения массива от 0 до %d : \n",length-1);
  for(int j=0;j<length;j++){
      printf(" [%d] = %d;\n",j,arr[j]);
  }
  
  int matrix1[2][2]={1,2,3,4};
  int matrix2[2][2]={1,0,0,1};
  int resMatrix[2][2];
  for(int i = 0; i < 2; i++){
    for(int j = 0; j < 2; j++)
    {
        resMatrix[i][j] = 0;
        for(int k = 0; k < 2; k++){
            resMatrix[i][j] += matrix1[i][k] * matrix2[k][j];
        }
    }
  }
  for(int q=0;q<2;q++){
    for(int w=0;w<2;w++){
    printf("%d ",resMatrix[q][w]);
    }
    printf("\n");
  }
}
