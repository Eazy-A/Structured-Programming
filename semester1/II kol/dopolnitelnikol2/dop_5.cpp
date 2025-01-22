#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    double A[50][50], B[50][50];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> A[i][j];
            B[i][j] = A[i][j];
        }
    }
    int r1, c1, r2, c2;
    cin >> r1 >> c1 >> r2 >> c2;
    for (int i = r1; i <= r2; i++) {
        for (int j = c1; j <= c2; j++) {
            double sum = B[i][j];
            int count = 1;
            for (int di = -1; di <= 1; di++) {
                for (int dj = -1; dj <= 1; dj++) {
                    int ni = i + di, nj = j + dj;
                    if (ni >= 0 && ni < n && nj >= 0 && nj < m && (di != 0 || dj != 0)) {
                        sum += B[ni][nj];
                        count++;
                    }
                }
            }
            A[i][j] = sum / count;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << setprecision(6) << A[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}