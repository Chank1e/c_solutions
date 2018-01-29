#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#include "rhombus.h"


int main()
{
	rhomb rh;
	printf("Enter coords:");
	printf("\nAx:"); scanf("%lf", &rh.Ax);
	printf("\nAy:"); scanf("%lf", &rh.Ay);
	printf("\nBx:"); scanf("%lf", &rh.Bx);
	printf("\nBy:"); scanf("%lf", &rh.By);
	printf("\nCx:"); scanf("%lf", &rh.Cx);
	printf("\nCy:"); scanf("%lf", &rh.Cy);
	printf("\nDx:"); scanf("%lf", &rh.Dx);
	printf("\nDy:"); scanf("%lf", &rh.Dy);
	printf("Per:%lf", rh_Per(rh));
	printf("\nSq:%lf\n", rh_Square(rh));
	getchar();
	getchar();
	return 0;
	
}

