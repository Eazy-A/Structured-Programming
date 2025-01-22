#include <iostream>
using namespace std;
int main() {
    int a[100][100],m,n, M[100][100];
    cin>>m>>n;
    for (int i = 0; i<m; i++) {
        for (int j = 0; j<n; j++) {
            cin>>a[i][j];
            M[i][j] = a[i][j];
        }
    }
    int z;
    cin>>z;
    int zbir = 0;
    if (z < 2) {
        for (int i = 0; i<m; i++) {
            for (int j = 0; j<n; j++) {
                M[i][j] += M[i][j];
                cout<<M[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else {
        for (int i = 0; i<=m-z; i++) {
            for (int j = 0; j<=n-z; j++) {
                zbir = 0;
                for (int k = 1; k<z; k++) {
                    zbir += a[k+i][j];
                }
                for (int k = 0; k<z-1; k++) {
                    zbir += a[k+i][z-1+j];
                }
                for (int k = 0; k<z; k++) {
                    zbir += a[i+k][j+k];
                }
                // cout<<"i:"<<i<<".j:"<<j<<". ";
                // cout<<zbir<<endl;
                M[i][j] = zbir;
            }
        }
        for (int i = 0; i<m; i++) {
            for (int j = 0; j<n; j++) {
                cout<<M[i][j]<<" ";
            }
            cout<<endl;
        }
    }
        return 0;
    }
