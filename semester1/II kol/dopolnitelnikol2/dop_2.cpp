#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n, size, start = 1;
    cin>>n;
    int matrix[100][100] = {0};
    size = ceil(sqrt(n));
    for (int j = 0; j < size; j++) {
        if (j % 2 == 0) {
            for (int i = 0; i < size; i++) {
                // cout<<n<<" "<<matrix[j][i]<<endl;
                // cout<<"i: "<<i<<" j: "<<j<<endl;

                if (start <= n) {matrix[i][j] = start;
                    start ++;
                }
                if (start > n ) break;
            }
        }
        else {
            for (int i = size - 1; i >= 0; i--) {
                // cout<<n<<" "<<matrix[j][i]<<endl;
                // cout<<"i: "<<i<<" j: "<<j<<endl;
                matrix[i][j] = start;
                if (start <= n) {
                    start ++;
                }
                if (start > n ) break;
            }
        }
        }

    for (int i = 0; i<size; i++) {
        for (int j = 0; j<size; j++) {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}