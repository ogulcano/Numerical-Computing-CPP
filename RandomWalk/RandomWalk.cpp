#include <iostream>
#include <cstdlib>
#include <time.h>
#include <math.h>
#include <fstream>
using namespace std;

double MA(int i,int n,double price[]){
        double av = 0;
        if (i < n){
        for (int j = i; j<=2*i; j++){
            av +=price[j];
        }
        av = av/(i+1);
        
        }else{
        for (int j=i-n+1;j<i+1;j++){
            av  += price[j];
            }
        av = av/n;
    
    }
    return av;
    }
int main(){
    srand(time(NULL));
    ofstream myfile;
    myfile.open ("ODESolver.txt");
    int N = 50;
    double S0 = 0;
    double price[N];
    double MA3[N];
    double MA5[N];
    double MA7[N];
    for (int i = 0;i<N;i++){
        
        double r = ((double) rand() / (RAND_MAX));
        if (r < 0.5){
            S0 += exp((float) 1/(sqrt(i+1)));
        }else{
            S0 -= exp((float) 1/(sqrt(i+1)));
        }
        price[i] = S0;
    }
    for (int i = 0;i<N;i++){
        double av = 0;
        MA3[i] = MA(i,3,price);
        MA5[i] = MA(i,5,price);
        MA7[i] = MA(i,7,price);
        myfile <<i<<" "<<price[i]<<" "<<MA3[i]<<" "<<MA5[i]<<" "<<MA7[i]<<endl;
    }
    myfile.close();
    return 0;
}

