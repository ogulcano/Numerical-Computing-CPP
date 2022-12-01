#include <iostream>

using namespace std;

int main()
{
    int m,n;
    cout<<"Enter m: ";
    cin>>m;
    cout<<"Enter n: ";
    cin>>n;
    float a[m][n];
    float t[n][m];
    float r[m][m];
    for (int i = 0; i<m;i++){
    for(int j=0; j<n; j++){
        cout<<i<<" "<<j<<" "<<"Enter a number: ";
        cin>>a[i][j];
            }

    }
    cout<<"Matrix A"<<endl;
    for (int i = 0; i<m;i++){
    for(int j=0; j<n; j++){
            cout<<a[i][j]<<" ";
            }
    cout<<endl;
    }
    for (int i = 0; i<m;i++){
    for(int j=0; j<n; j++){
        t[j][i] = a[i][j];
            }
}
    cout<<"Matrix A Transpose"<<endl;
    for (int i = 0; i<n;i++){
    for(int j=0; j<m; j++){
            cout<<t[i][j]<<" ";
            }
    cout<<endl;
    }
    for (int i = 0; i <m; i++){
        for(int j = 0; j<m; j++){
            r[i][j]=0;
            for (int k=0; k<n; k++){
                r[i][j] += (a[i][k]*t[k][j]);
            }
        }
    }
    cout<<"Matrix A by A Transpose"<<endl;
    for (int i=0; i<m; i++){
        for (int j=0; j<m; j++){
            cout<<r[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
