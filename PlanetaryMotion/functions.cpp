#include <cmath>
#include "introutine.h"


const double G = 10.0;
const double M = 1.0;

double f1(double t, double x, double vx, double y, double vy){
    return vx;
}

double g1(double t, double x, double vx, double y, double vy){
    return vy;
}

double f2(double t, double x, double vx, double y, double vy){
    double r, r2;
    r2 = x*x + y*y;
    r = sqrt(x*x + y*y);
    return -(G*M*x)/(r2*r);
}

double g2(double t, double x, double vx, double y, double vy){
    double r, r2;
    r2 = x*x + y*y;
    r = sqrt(x*x + y*y);
    return -(G*M*y)/(r2*r);
}
