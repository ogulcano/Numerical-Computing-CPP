#include <iostream>
#include <math.h>
using namespace std;
float diff (float x, float y){
	float dy;
	dy = (x+y)/(x-y);
	return dy;	 
}
int main() {
	float start_x,start_y;
	float end_x;
	int n;
	float h;
	cout<<"Enter start point x:";
	cin>>start_x;
	cout<<"Enter start point y:";
	cin>>start_y;
	cout<<"Enter end point x:";
	cin>>end_x;
	cout<<"Number of iteration:";
	cin>>n;
	h= (end_x-start_x)/n;
	float yn[n],xn[n];
	for (int i=0;i<=n;i++){
		xn[i] = start_x;
		start_x +=h;
		
	}
	cout<<endl;
	yn[0] = start_y;
	for (int i =0;i<n; i++){
		yn[i+1] = yn[i] + h*diff(xn[i],yn[i]);
		cout<<i+1<<".Iteration"<<endl;
		cout<<xn[i]<<" "<<yn[i]<<endl;
		cout<<xn[i+1]<<" "<<yn[i+1]<<endl;
		cout<<"***"<<endl;
	}
	cout<<yn[n];
	return 0;
}
