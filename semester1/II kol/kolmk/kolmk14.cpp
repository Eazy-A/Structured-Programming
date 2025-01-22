#include <iostream>
using namespace std;
int main() {
    int a[100][100], b[100][100] = {0};
    int n;
    cin>>n;
    for (int i = 0; i<n; i++) {
        for (int j = 0; j<n*2; j++) {
            cin>>a[i][j];
        }
    }
    for (int i = 0; i<n; i++) {
        for (int j = 0; j<n; j++) {
            b[i][j] = a[i][j];
            b[i+n][j] = a[i][j+n];
        }
    }
    for (int i = 0; i<n*2; i++) {
        for (int j = 0; j<n; j++) {
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }

}