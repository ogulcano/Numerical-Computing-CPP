#include <iostream>
#include <math.h>
using namespace std;

float integral(float low,float up,int n){
	float final_value;
	final_value = ((pow(up,n+1)-pow(low,n+1))/(n+1));
	
	return final_value;
}
int main(){
	int n;
	float low,up;
	float a[n];
	float sum = 0;
	cout<<"Degree of polynomial: ";
	cin>>n;
	cout<<"Lower limit: ";
	cin>>low;
	cout<<"Upper limit: ";
	cin>>up;
	
	for (int i=n; 0<=i; i--){
		cout<<"Enter "<<i<<" coefficient of polynomial: ";
		cin>>a[i];
	}
	for (int i=n; 0<=i; i--){
		sum +=a[i]*integral(low,up,i);
}
	cout<<"Your polynomial is given below..."<<endl;
	cout<<">> ";
	for (int i=n; 0<=i; i--){
		cout<<a[i]<<"*x^"<<i<<"+";
	}
	cout<<endl;
	cout<<sum;	
	return 0;
}
