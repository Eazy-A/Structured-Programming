#include <iostream>
using namespace std;
int main() {
    float a[100][100];
    int m, n;
    cin>>m>>n;
    for (int i = 0; i<m ; i++) {
        for (int j = 0; j<n; j++) {
            cin>>a[i][j];
        }
    }
    float zbir = 0;
    int k = 0;
    float zbirovi[100] = {0};
   while (m>1 && n>1) {
        zbir = 0;
        int min = n;
        if (m<n) {
            min = m;
        }
        for (int i = 0; i<min; i++) {
            zbir += a[i][0];
        }
        for (int i = 0; i<min; i++) {
            zbir += a[i][min-1];
        }
        for (int i = 1; i<m-1 ; i++) {
            for (int j = 0; j<n-1; j++) {
                if (i == j) {
                    zbir += a[i][j];
                }
            }
        }
         zbirovi[k] = zbir;
         m--;
         n--;
         k++;
    }
     for (int i = k-1 ; i>-1; i--) {
         cout<<zbirovi[i]<<endl;
     }
}