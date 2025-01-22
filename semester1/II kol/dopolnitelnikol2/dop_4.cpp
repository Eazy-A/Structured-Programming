#include <iostream>
using namespace std;
int main() {
    int m, n, A[100][100];
    cin>>m>>n;
    int r,k;
    int min = 100000;
    cin>>r>>k;
    for (int i = 0; i<m; i++) {
        for (int j = 0; j<n; j++) {
            cin>>A[i][j];
            if (A[i][j] < min) {
                min = A[i][j];
            }
        }
    }
    for (int i = 0; i<r; i++) {
        for (int j = 0; j<k; j++) {
            A[i][j] = min;
        }
    }
    for (int i = 0; i<m; i++) {
        for (int j = 0; j<n; j++) {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }

}