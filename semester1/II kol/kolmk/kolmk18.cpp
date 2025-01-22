#include <iostream>
using namespace std;
int main() {
    float a[100][100];
    int n;
    cin>>n;
    for (int i = 0; i<n; i++) {
        for (int j = 0; j<n; j++) {
            cin>>a[i][j];
        }
    }
    float x = 0, y = 0, b[100][100] = {0};
    for (int i = 0; i<n; i++) {
        for (int j = 0; j<i; j++) {
            x += a[i][j];
        }
    }
    for (int i = 0; i<n; i++) {
        for (int j = 0; j<n; j++) {
                if (i+j>=n) {
                    y += a[i][j];
                }
        }
    }
    for (int i = 0; i<n; i++) {
        for (int j = 0; j<n; j++) {
            if (i == j) {
                b[i][j] = x;
            }
            if (i + j == n - 1) {
                b[i][j] = y;
            }
            if (i == j && i + j == n - 1) {
                b[i][j] += x;
            }
        }
    }

    for (int i = 0; i<n; i++) {
        for (int j = 0; j<n; j++) {
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
}

