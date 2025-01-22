#include <iostream>
using namespace std;
int main() {
    int a[100][100],m,n,x,sumrow = 0;
    cin>>x>>m>>n;
    for(int i=0;i<m;i++) {
        sumrow = 0;
        for(int j=0;j<n;j++) {
            cin>>a[i][j];
            sumrow += a[i][j];
        }
        if (sumrow == x) {
            for(int j=0;j<n;j++) {
                a[i][j] = 0;
            }
        }
        if (sumrow > x) {
            for(int j=0;j<n;j++) {
                a[i][j] = 1;
            }
        }
        if (sumrow < x) {
            for(int j=0;j<n;j++) {
                a[i][j] = -1;
            }
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

}