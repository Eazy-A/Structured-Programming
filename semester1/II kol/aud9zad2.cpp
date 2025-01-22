#include <iostream>
using namespace std;
int main() {
    int a[100][100],n, m, max = INT_MIN, min = INT_MAX;
    cin>>n>>m;
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            max = max > a[i][j] ? max : a[i][j];
            min = min < a[i][j] ? min : a[i][j];
        }
    }
    int raz = max - min;
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            if(i == j) {
                a[i][j] = raz;
            }
        }
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<max<<endl;
    cout<<min<<endl;

}