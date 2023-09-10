#include <iostream>
#include <math.h>
using namespace std;

float f(float x){
    return pow(x,2)*exp(-x+pow(x,2)) - 5*log(x);
}
float df(float x){
    return (2*x-pow(x,2)+2*pow(x,3))*exp(x-pow(x,2)) - 5/x;
}
int main() {
    float rate = 0.0005;
    float x0 = 1;
    float y0 = f(x0);
    for (int i = 1; i < 150; i++) {
        float xtemp = x0;
        float ytemp = y0;
        xtemp = x0 - rate*df(x0);
        ytemp = f(xtemp);
        x0 = xtemp;
        y0 = ytemp;
    }
    cout<<"x:"<<x0<<" \ny:"<<y0<<endl;
    return 0;
}

