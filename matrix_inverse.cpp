#include<iostream>
#include<iomanip>
#include<math.h>
#include<stdlib.h>

#define SIZE 10

using namespace std;

int main()
{
		 float a[SIZE][SIZE], x[SIZE], ratio,res[SIZE][SIZE],inv[SIZE][SIZE],b[SIZE][SIZE];
		 int i,j,k,n;
         cout<< setprecision(3)<< fixed;
		 cout<<"Enter order of matrix: ";
		 cin>>n;
		 cout<<"Enter coefficients of Matrix: " << endl;
		 for(i=1;i<=n;i++)
		 {
			  for(j=1;j<=n;j++)
			  {
				   cout<<"a["<< i<<"]["<< j<<"]= ";
                   cin>>a[i][j];
			  }
		 }
		 cout<<"Enter coefficients of b Matrix: " << endl;
		 for(i=1;i<=n;i++)
		 {
			  for(j=1;j<=1;j++)
			  {
				   cout<<"b["<< i<<"]["<< 1<<"]= ";
                   cin>>b[i][j];
			  }
		 }
		 for(i=1;i<=n;i++)
		 {
			  for(j=1;j<=n;j++)
			  {
				   if(i==j)
				   {
				    	a[i][j+n] = 1;
				   }
				   else
				   {
				    	a[i][j+n] = 0;
				   }
			  }
		 }
		 for(i=1;i<=n;i++)
		 {
			  if(a[i][i] == 0.0)
			  {
				   cout<<"Mathematical Error!";
				   exit(0);
			  }
			  for(j=1;j<=n;j++)
			  {
				   if(i!=j)
				   {
					    ratio = a[j][i]/a[i][i];
					    for(k=1;k<=2*n;k++)
					    {
					     	a[j][k] = a[j][k] - ratio*a[i][k];
					    }
				   }
			  }
		 }
		 for(i=1;i<=n;i++)
		 {
			  for(j=n+1;j<=2*n;j++)
			  {
			   	a[i][j] = a[i][j]/a[i][i];
			  }
		 }
    cout<<"Inverse Matrix "<<endl;
    for (i = 1; i <= n; i++)
    {
        for (j = n + 1; j <= n * 2; j++)
        {
        	inv[i][j-n]=a[i][j];
            cout<<a[i][j]<<"    ";
        }
        cout<<endl;
        
}
		for (i = 1; i <= n; i++) {
        for (j = 1; j <= 1; j++) {
            res[i][j] = 0;
            for (k = 1; k <= n ; k++)
                res[i][j] += (inv[i][k] * b[k][j]);
        }
		}
		cout<< endl<<"Solution Matrix is:"<< endl;
		 for(i=1;i<=n;i++)
		 {
			  for(j=1;j<=1;j++)
			  {
			   	cout<< res[i][j]<<"\t";
			  }
			  cout<< endl;
		 }
		
		 return(0);
}

