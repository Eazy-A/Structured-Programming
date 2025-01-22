#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int arr[100][100],m,n;
    cin>>m>>n;
    for (int i = 0; i<m ; i++) {
        for (int j = 0; j<n ; j++) {
            cin>>arr[i][j];
        }
    }
    int suml, sumr;
    if (n % 2 == 0) {
        for (int i = 0; i < m ; i++) {
            suml = 0, sumr = 0;
            for (int j = 0; j<n/2; j++) {
            suml += arr[i][j];
            }
            for (int k = (n/2); k<n; k++) {
            sumr += arr[i][k];
            }
            arr[i][n/2] = fabs(suml - sumr);
            arr[i][n/2-1] = fabs(suml - sumr);
        }
    }
    else {
        for (int i = 0; i < m ; i++) {
            suml = 0, sumr = 0;
            for (int j = 0; j<n/2; j++) {
                suml += arr[i][j];
            }
            for (int k = (n/2+1); k<n; k++) {
                sumr += arr[i][k];
            }
            arr[i][n/2] = fabs(suml - sumr);
        }
    }
    for (int i = 0; i<m ; i++) {
        for (int j = 0; j<n ; j++) {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}