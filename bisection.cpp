#include <iostream>
#include <math.h>
using namespace std;
float diff (float x){
	float fout;
	fout = 3*pow(x,2)-4*x-pow(x,3)+2;
	return fout;	 
}
int main(){
	
	float lower, upper;
	float soln,fout;
	int counter;
	cout<<"Lower:";
	cin>>lower;
	cout<<"Upper:";
	cin>>upper;
	cout<<"Lower: "<<lower<<"\t"<<"Upper: "<<upper<<endl;
	while(upper-lower>0.04) {
		soln = (upper+lower)/2;
		fout = diff(soln);
		
		if (fout > 0) {
			lower = soln;
		}
		else {
			upper = soln;
		}
		counter++;
		cout<<"Lower: "<<lower<<"\t"<<"Upper: "<<upper<<endl;		
	}

	cout<<""<<(upper+lower)/2<<endl;
	cout<<"Iteration: "<<counter;
	return 0;
}
