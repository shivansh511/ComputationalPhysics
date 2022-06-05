#include "introutine.h"

void RK4(double& t, double& x1, double& x2, double& x3, 
        double& x4, double dt){
    double k11,k12,k13,k14,k21,k22,k23,k24;
    double k31,k32,k33,k34,k41,k42,k43,k44;
    double h,h2,h6;

    h =dt;     // h  = dt, integration step
    h2=0.5*h;  // h2 = h/2
    h6=h/6.0;  // h6 = h/6
  
    k11=f1(t,x1,x2,x3,x4);
    k21=f2(t,x1,x2,x3,x4);    
    k31=g1(t,x1,x2,x3,x4);
    k41=g2(t,x1,x2,x3,x4);

    k12=f1(t+h2,x1+h2*k11,x2+h2*k21,x3+h2*k31,x4+h2*k41);
    k22=f2(t+h2,x1+h2*k11,x2+h2*k21,x3+h2*k31,x4+h2*k41);
    k32=g1(t+h2,x1+h2*k11,x2+h2*k21,x3+h2*k31,x4+h2*k41);
    k42=g2(t+h2,x1+h2*k11,x2+h2*k21,x3+h2*k31,x4+h2*k41);

    k13=f1(t+h2,x1+h2*k12,x2+h2*k22,x3+h2*k32,x4+h2*k42);
    k23=f2(t+h2,x1+h2*k12,x2+h2*k22,x3+h2*k32,x4+h2*k42);
    k33=g1(t+h2,x1+h2*k12,x2+h2*k22,x3+h2*k32,x4+h2*k42);
    k43=g2(t+h2,x1+h2*k12,x2+h2*k22,x3+h2*k32,x4+h2*k42);

    k14=f1(t+h ,x1+h *k13,x2+h *k23,x3+h *k33,x4+h *k43);
    k24=f2(t+h ,x1+h *k13,x2+h *k23,x3+h *k33,x4+h *k43);
    k34=g1(t+h ,x1+h *k13,x2+h *k23,x3+h *k33,x4+h *k43);
    k44=g2(t+h ,x1+h *k13,x2+h *k23,x3+h *k33,x4+h *k43);
  
    t =t+h;
    x1=x1+h6*(k11+2.0*(k12+k13)+k14);
    x2=x2+h6*(k21+2.0*(k22+k23)+k24);
    x3=x3+h6*(k31+2.0*(k32+k33)+k34);
    x4=x4+h6*(k41+2.0*(k42+k43)+k44);
}