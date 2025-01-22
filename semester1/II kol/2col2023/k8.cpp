#include <iostream>
using namespace std;

int main() {
    int A[100][100], M[100][100];
    int m, n, z;
    cin >> m >> n;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }
    cin >> z;
    if (z < 2) {
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                M[i][j] = A[i][j];
            }
        }
    } else {
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                M[i][j] = A[i][j];
                if (i + z - 1 < m && j + z - 1 < n) {
                    int sum = 0;
                    for (int k = 0; k < z; k++) {
                        sum += A[i][j + k];
                    }
                    for (int k = 1; k < z - 1; k++) {
                        sum += A[i + k][j + z - k - 1];
                    }
                    for (int k = 0; k < z; k++) {
                        sum += A[i + z - 1][j + k];
                    }
                    M[i][j] = sum;
                }
            }
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << M[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
