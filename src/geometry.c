#include "geometry.h"
#include <ctype.h>
#include <math.h>

void S_And_P_Circle(double* S, double* P, Figure* new)

{
    double r = new->coordinates[2];
    *S = M_PI * (r * r);
    *P = 2 * M_PI * r;
}