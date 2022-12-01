#include <iostream>
#include <math.h>
#include <dos.h>
#include <stdlib.h>
using namespace std;

int main() {
	float rate, annual,present,future,infl,real_int,n;
	float sum=0;
	int enter;
	while (true){
	cout << "Engineering Economics Calculator 1.0"<<endl;
	cout <<"Choose your calculation"<<endl;
	cout <<"1.Present Value Calculation" <<endl;
	cout <<"2.Future Value Calculation" <<endl;
	cout <<"3.Annual Value Calculation by Present Value" <<endl;
	cout <<"4.Annual Value Calculation by Future Value" <<endl;
	cout <<"5.Real Interest Rate Calculator" <<endl;
	cout <<"6.Effective Interest Rate Calculator" <<endl;
	cout <<"7.Capitalized Cost Calculator" <<endl;
	cout <<"Choose your calculation: "<<endl;
	cout <<"Press 0 to Quit" <<endl;
	cin>>enter;
	if (enter ==1){
	cout <<"Present Value Calculator" <<endl;
	cout <<"Interest Rate: ";
	cin>>rate;
	cout <<"Annual Payment: ";
	cin>>annual;
	cout <<"Period: ";
	cin>>n;
	for (int i=1; i <= n; i++){
		sum +=annual/pow(1+rate,i);
	}
	cout <<">> " <<sum<<endl;
	cout<<endl;
	cout<<endl;
	sum =0;
	}
	else if (enter ==2){
		cout <<"Future Value Calculator" <<endl;
		cout <<"Interest Rate: ";
		cin>>rate;
		cout <<"Annual Payment: ";
		cin>>annual;
		cout <<"Period: ";
		cin>>n;
		for (int i=1; i <= n; i++){
		sum +=annual/pow(1+rate,i);
		}
		sum = sum*pow(1+rate,n);
		cout <<">> " <<sum<<endl;
		cout<<endl;
		cout<<endl;
		sum =0;
		}
	else if (enter ==3){
		cout <<"Annual Value Calculator by Present Value" <<endl;
		cout <<"Interest Rate: ";
		cin>>rate;
		cout <<"Present Value: ";
		cin>>present;
		cout <<"Period: ";
		cin>>n;
		for (int i=1; i <= n; i++){
		sum +=pow(1+rate,-i);
		}
		sum = present/sum;
		cout <<">> " <<sum<<endl;
		cout<<endl;
		cout<<endl;
		sum =0;
		}
	else if (enter ==4){
		cout <<"Annual Value Calculator by Future Value" <<endl;
		cout <<"Interest Rate: ";
		cin>>rate;
		cout <<"Future Value: ";
		cin>>future;
		cout <<"Period: ";
		cin>>n;
		for (int i=1; i <= n; i++){
		sum +=pow(1+rate,n-i);
		}
		sum = future/sum;
		cout <<">> " <<sum<<endl;
		cout<<endl;
		cout<<endl;
		sum =0;
		}
	else if (enter == 5){
		cout <<"Real Interest Rate Calculator"<<endl;
		cout<<"Nominal Interest Rate: ";
		cin>>rate;
		cout<<"Inflation Rate (Expected): ";
		cin>>infl;
		real_int = ((1.0+rate)/(1+infl))-1;
		cout<<">> "<<real_int<<endl;
		cout<<endl;
		cout<<endl;
	}
	else if (enter == 6){
		cout<<"Effective Interest Rate Calculator"<<endl;
		cout<<"Nominal Interest Rate: ";
		cin>>rate;
		cout<<"Period: ";
		cin>>n;
		sum = pow((1.0+rate/n),n)-1.0;
		cout<<">> "<<sum;
		sum =0;
		cout<<endl;
		cout<<endl;		
	}
	else if (enter == 7){
		cout<<"Capitalized Cost Calculator" <<endl;
		cout<<"Annual Value: ";
		cin>>annual;
		cout<<"Interest Rate:";
		cin>>rate;
		sum= (annual/float(rate));
		cout<<">> "<<sum<<endl;
	}
	else if (enter == 0){
			break;
	}
	else {
		cout <<"Not defined!";
	}
	}
	system("pause");
	return 0;
}
