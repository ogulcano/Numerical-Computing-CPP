#include <iostream>
#include <math.h>
using namespace std;
float func (float x, float y, float c){
	float dy;
	dy = -c*y;
	return dy;	 
}
int main() {
	float start_x,start_y,dy_x;
	float end_x;
	int n;
	float a,b,c;
	float h;
	cout<<"CONSTANT COEFFICIENT ODE SOLVER"<<endl;
	cout<<"y'' coefficient:";
	cin>>a;
	cout<<"y' coefficient:";
	cin>>b;
	cout<<"y coefficient:";
	cin>>c;
	cout<<"Enter start point x:";
	cin>>start_x;
	cout<<"Enter start point y:";
	cin>>start_y;
	cout<<"Enter dy(x):";
	cin>>dy_x;
	cout<<"Enter end point x:";
	cin>>end_x;
	cout<<"Number of iteration:";
	cin>>n;
	h= (end_x-start_x)/n;
	float yn[n],xn[n];
	float d2y[n],dy[n];
	for (int i=0;i<=n;i++){
		xn[i] = start_x;
		start_x +=h;
		
	}
	cout<<endl;
	yn[0] = start_y;
	dy[0] = dy_x;

	for (int i =0;i<n;i++){
		d2y[i] = (func(xn[i],yn[i],c)+(-b)*dy[i])/a;
		cout<<xn[i]<<"<>"<<yn[i]<<endl;
		cout<<func(xn[i],yn[i],c)<<endl;
		cout<<d2y[i]<<endl;
		cout<<"***"<<endl;
		dy[i+1] =dy[i]+ d2y[i]*h;
		yn[i+1] = yn[i] + dy[i]*h+ d2y[i]*pow(h/sqrt(2),2);
		cout<<i+1<<".Iteration"<<endl;
		cout<<xn[i]<<" "<<yn[i]<<endl;
		cout<<xn[i+1]<<" "<<yn[i+1]<<endl;
		cout<<"***"<<endl;
	}
	cout<<yn[n];
	return 0;
}


