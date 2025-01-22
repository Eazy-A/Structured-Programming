#include <iostream>
using namespace std;

int main() {
    int n, m, a[200][200];
    cin>>n>>m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    for (int j = 0; j < m; j++) {
        int matches = 0, bj = 1, temp = j;
        while (temp >= 10) {
            temp /= 10;
            bj++;
        }
        for (int i = 0; i < n; i++) {
            int numindex = i;
            for (int k = 0; k < bj; k++) {
                numindex *= 10;
            }
            numindex += j;
            if (a[i][j] == numindex) {
                matches++;
            }
        }
        cout<<matches<<endl;
    }
    return 0;
}
