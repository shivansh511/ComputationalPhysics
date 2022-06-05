#include <iostream>

void RK4(double& , double& , double& , double&, 
        double&, double);

double f1(double, double, double, 
        double, double);// dvx/dt = ax = f(x,y,vx,vy)
double f2(double, double, double, 
        double, double); // dx/dt = vx = f(x,y,vx,vy) 

double g1(double, double, double, double, double);
double g2(double, double, double, double, double);    
