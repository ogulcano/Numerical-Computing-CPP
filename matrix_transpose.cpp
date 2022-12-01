#include <iostream>
#include <stdlib.h>
#include <windows.h> 
#include <math.h>
using namespace std;

int main()
{
	int i,j,k,x,y;
	cout<<"Number of rows:";
	cin>>x;
	cout<<"Number of columns:";
	cin>>y;
	float mat[x][y];
	float tmat[y][x];
	float res[x][x];
		for (i=0; i<x; i++){
 			for(j=0; j<y; j++){
 			cout<<i<<" "<<j<<" "<<">> Enter a number: ";
 			cin>>mat[i][j];
			 }
 		
	 	}
	cout << "Input matrix is \n";
	
		for (i= 0; i<x; i++){
		for (j=0; j<y; j++)
	 	cout << mat[i][j] << " ";
        cout << "\n";
	}
	cout << "Transpose matrix is \n";
    for(i=0; i < x; i++){
    	for(j=0; j<y;j++){
			tmat[j][i] +=mat[i][j];	
			}
        		
		}
		for (i= 0; i<y; i++){
		for (j=0; j<x; j++)
	 	cout << tmat[i][j] << " ";
        cout << "\n";
	}
		for (i = 0; i < x; i++) {
        for (j = 0; j < x; j++) {
            res[i][j] = 0;
            for (k = 0; k < y ; k++)
                res[i][j] += (mat[i][k] * tmat[k][j]);
        }
		}
	cout << "Result matrix is \n";
    for (i = 0; i < x; i++) {
        for (j = 0; j < x; j++)
            cout << res[i][j] << " ";
        cout << "\n";
    }
	return 0;
	cout<<endl;
}
