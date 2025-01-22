#include <iostream>
using namespace std;
int main() {
    int m,n,a[100][100],result[100];
    cin>>m>>n;
    float sum = 0;
    float avg = 0;
    int diff;
    for(int i=0;i<m;i++) {
        for(int j=0;j<n;j++) {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<m;i++) {
        sum = 0;
        for(int j=0;j<n;j++) {
            sum += a[i][j];
        }
        avg = sum/n;
        int maxdiff = 0;
        int najdal = a[i][0];
        for(int j=0;j<n;j++) {
            diff = a[i][j] - avg;
            if(diff > 0) {
                if(diff > maxdiff) {
                    maxdiff = diff;
                    najdal = a[i][j];
                }
            }
            else if (diff < 0) {
                if(diff < maxdiff) {
                    maxdiff = diff;
                    najdal = a[i][j];
                }
            }
            result[i] = najdal;
        }
    }
    for(int i=0;i<m;i++) {
        cout<<result[i]<<" ";
    }
    return 0;
}