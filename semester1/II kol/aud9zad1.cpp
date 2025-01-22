#include <iostream>
using namespace std;
int main() {
    int a[100][100], sumcol = 0, sumrow = 0;
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            if(i%2 != 0) {
                sumrow += a[i][j];
            }
            if(j%2 == 0) {
                sumcol += a[i][j];
            }
        }
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<sumcol-sumrow<<endl;

}