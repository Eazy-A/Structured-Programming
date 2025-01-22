#include <iostream>
using namespace std;
int main() {
    int a[100][100],n,sum = 0, maxsum = -10000, maxcol;
    cin>>n;
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cin>>a[i][j];
        }
    }
    for(int j = 0; j<n; j++) {
        sum = 0;
        for(int i=0;i<n;i++) {
            sum += a[i][j];
        }
        if(sum > maxsum) {
            maxsum = sum;
            maxcol = j;
        }
    }
    for(int i=0;i<n;i++) {
        a[i][maxcol] += maxsum;
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
