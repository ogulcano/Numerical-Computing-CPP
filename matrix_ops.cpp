#include <iostream>
#include <stdlib.h>
#include <windows.h> 
using namespace std;

int main()
{
	SetConsoleTitle("Matrix Operations");
    int i, j,k,n,N;
    float det;
    int enter;
    while(true){
    cout<<"Define your matrix and enter its values..." <<endl;
    cout<<"Output Matrix N: ";
    cin>>N;
    cout<<"Input Matrix n: ";
 	cin>>n;
    int res[N][N]; 
    int mat1[N][N];
 	int mat2[N][N];	
	cout<<"Choose an operation..."<<endl;
	cout<<"1. Square Matrix Multiplication"<<endl;
	cout<<"2. Square Matrix Addition"<<endl;
	cout<<"3. Square Matrix Substraction"<<endl;
	cout<<"0 to Quit"<<endl;
	cin>>enter;
	if (enter == 1){
		for (i=0; i<n; i++){
 		for(j=0; j<n; j++){
 			cout<<i<<" "<<j<<" "<<"Enter a number: ";
 			cin>>mat1[i][j];
		 }
	 }
	 cout<<endl;

	for (i=0; i<n; i++){
 		for(j=0; j<n; j++){
 			cout<<i<<" "<<j<<" "<<"Enter a number: ";
 			cin>>mat2[i][j];
		 }
	 }

		for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            res[i][j] = 0;
            for (k = 0; k < N; k++)
                res[i][j] += (mat1[i][k] * mat2[k][j]);
        }
		}
    
    
    cout << "The first matrix is \n";
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            cout << mat1[i][j] << " ";
        cout << "\n";  
    }
    cout << "The second matrix is \n";
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            cout << mat2[i][j] << " ";
        cout << "\n";   
    }
    cout << "Result matrix is \n";
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++)
            cout << res[i][j] << " ";
        cout << "\n";
    }
	}
	
 	else if (enter == 2 ){
 	for (i=0; i<n; i++){
 	for(j=0; j<n; j++){
 			cout<<i<<" "<<j<<" "<<"Enter a number: ";
 			cin>>mat1[i][j];
		 }
	 }
	 cout<<endl;

	for (i=0; i<n; i++){
 		for(j=0; j<n; j++){
 			cout<<i<<" "<<j<<" "<<"Enter a number: ";
 			cin>>mat2[i][j];
		 }
	 }

 		for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            res[i][j] = 0;
                res[i][j] = (mat1[i][j] + mat2[i][j]);
        }
    }
    cout << "The first matrix is \n";
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            cout << mat1[i][j] << " ";
        cout << "\n";  
    }
    cout << "The second matrix is \n";
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            cout << mat2[i][j] << " ";
        cout << "\n";   
    }
    cout << "Result matrix is \n";
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++)
            cout << res[i][j] << " ";
        cout << "\n";
    }
	 }

 	else if (enter == 3){
 	for (i=0; i<n; i++){
 	for(j=0; j<n; j++){
 			cout<<i<<" "<<j<<" "<<"Enter a number: ";
 			cin>>mat1[i][j];
		 }
	 }
	 cout<<endl;

	for (i=0; i<n; i++){
 		for(j=0; j<n; j++){
 			cout<<i<<" "<<j<<" "<<"Enter a number: ";
 			cin>>mat2[i][j];
		 }
	 }

 		for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            res[i][j] = 0;
                res[i][j] = (mat1[i][j] - mat2[i][j]);
        }
    }
    cout << "The first matrix is \n";
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            cout << mat1[i][j] << " ";
        cout << "\n";  
    }
    cout << "The second matrix is \n";
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            cout << mat2[i][j] << " ";
        cout << "\n";   
    }
    cout << "Result matrix is \n";
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++)
            cout << res[i][j] << " ";
        cout << "\n";
    }
	 }


	else if(enter == 0){
		break;
	}
}
    return 0;
}


 

