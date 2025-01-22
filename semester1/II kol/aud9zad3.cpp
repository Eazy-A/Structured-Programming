#include <iostream>
using namespace std;
int main() {
    int a[100][100], n;
    cin>>n;
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cin>>a[i][j];
        }
    }
    bool flag = true;
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            if(a[i][j] != a[j][i]) {
                flag = false;
            }
        }
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<n;j++) {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    if(flag) {
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }
}