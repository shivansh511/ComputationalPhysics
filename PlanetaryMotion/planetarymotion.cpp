#include <fstream>
#include <vector>
#include <iostream>
#include "introutine.h" //Header file fourth order Runge-Kutta integration routine


using namespace std;

int main(){
    double x, y, vx, vy;
    double t, dt;

    x = 1.0;
    y = 0.0;
    vx = 0.0;
    vy = 3.5; //Set to 1.5

    t = 0.0;
    dt = 0.001;

    ofstream data("orbitdata.csv");
    data.precision(5);

    data << x <<","<< y << ","<< vx << "," << vy << endl;
    
    for (int i = 0; i <= 4000; i++){
        RK4(t, x, vx, y, vy, dt);
        data << x <<","<< y << ","<< vx << "," << vy << endl;
    }

    data.close();
    return 0;
}
