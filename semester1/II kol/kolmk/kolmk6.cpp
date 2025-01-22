#include <iostream>
using namespace std;
bool has3consecutive1s(int arr[], int n) {
    for (int i = 0; i<n-2; i++) {
        if (arr[i] == 1 && arr[i+1] == 1 && arr[i+2] == 1) {
            return true;
        }
    }
    return false;
}
int main() {
    int matrix [100][100], m, n, counter = 0;
    cin>>m>>n;
    for (int i=0; i<m; i++) {
        for (int j=0; j<n; j++) {
            cin>>matrix[i][j];
        }
    }
    for (int i = 0; i<m; i++) {
        if (has3consecutive1s(matrix[i], n)) {
            counter++;
        }
    }
    for (int j = 0; j<n; j++) {
        int temp[100];
        for (int i = 0; i<m; i++) {
            temp[i] = matrix[i][j];
        }
        if (has3consecutive1s(temp,m)) {
            counter++;
        }
    }
    cout<<counter;
}