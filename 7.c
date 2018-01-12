#include <conio.h> 
#include <stdlib.h> 
enum car {
  Legkovoy,
  Gruzovoy,
  Avtobus,
  Gonochnyy
};

int main() {
  enum car a, b, c, d;
  a = Legkovoy;
  b = Gruzovoy;
  c = Avtobus;
  d = Gonochnyy;
  printf("c= %d\n", c);
  int e[4][2];
  int i, j, k, dlina, S, P;
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 2; j++)
      scanf("%d", & e[i][j]);
  }
  for (i = 0; i < 4; i++) {
    for (j = 0; j < 2; j++) {
      printf("[%d],[%d]%d", i, j, e[i][j]);
    }
    printf("\n");
  }
  dlina = sqrt((e[0][0] - e[1][0]) * (e[0][0] - e[1][0]) + (e[0][1] - e[1][1]) * (e[0][1] - e[1][1]));
  S = dlina * dlina;
  P = dlina * 4;
  printf("%d", dlina);
  printf("S= %d,P= %d", S, P);
  return 0;
}

