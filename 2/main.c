#include <stdio.h>
#include <math.h>

int main() {
    double m,answer1,answer2;
    scanf("%lf",&m);
    answer1 = sqrt((3*m+2)*(3*m+2)-24*m)/(3*sqrt(m)-(2/sqrt(m)));//It's also like sqrt(m), so you can replace it with smaller formula
    answer2 = -1*sqrt(m);
    printf("%lf \t %lf",answer1,answer2);
}