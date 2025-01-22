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
            for (int j = 0; j<min-1; j++) {
                zbir += a[0][j];
            }
            for (int j = 1; j<min; j++) {
                zbir += a[m-1][j];
            }
            for (int i = 0; i<m ; i++) {
                for (int j = 0; j<n; j++) {
                    if (i+j == min-1) {
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