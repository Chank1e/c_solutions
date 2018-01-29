#include <math.h>

#include "rhombus.h"

double rh_Per(rhomb a)
{
	return 4 * sqrt(pow(a.Bx - a.Ax, 2) + pow(a.By - a.Ay, 2));
}
double rh_Square(rhomb a)
{
	return (sqrt(pow(a.Cx - a.Ax, 2) + pow(a.Cy - a.Ay, 2))*sqrt(pow(a.Dx - a.Bx, 2) + pow(a.Dy - a.By, 2))) / 2;
}
