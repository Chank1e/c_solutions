
#ifndef RHOMB_H
#define RHOMB_H

typedef struct {
	double Ax, Ay;
	double Bx, By;
	double Cx, Cy;
	double Dx, Dy;
} rhomb;
double rh_Per(rhomb a);
double rh_Square(rhomb a);

#endif

