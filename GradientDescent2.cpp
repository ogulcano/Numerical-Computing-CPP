#include <iostream>
#include <math.h>
using namespace std;

float f(float x,float y){
    return sin(5*x)*cos(5*y)/5;
}
float* df(float x,float y){
    static float a[2];
    a[0] = cos(5*x)*cos(5*y);
    a[1] = -sin(5*x)*sin(5*y);
    return a;
}
int main() {
    float rate = 0.01;
    float x0 = 0.7;
    float y0 = 0.4;
    for (int i = 1; i < 1000; i++) {
        float xtemp = x0;
        float ytemp = y0;
        float* retr = df(x0,y0);
        xtemp = x0 - retr[0]*rate;
        ytemp = y0 - retr[1]*rate;
        x0 = xtemp;
        y0 = ytemp;
    }
    cout<<"x:"<<x0<<" \ny:"<<y0<<endl;
    return 0;
}

