#include <iostream>
using namespace std;
int main() {
    int a[100],temp[100],n,m;
    cin>>n>>m;
    if(n>0) {
        m = m % n;
        for(int i=0;i<n;i++) {
            cin>>a[i];
        }
        if(m % n == 0) {
            for(int i=0;i<n;i++) {
                cout<<a[i]<<" ";
            }
        }
        else {
            for(int i=1;i<n;i++) {
                temp[i] = a[i-m];
            }
            for(int i=0;i<m;i++) {
                temp[i] = a[n-m+i];
            }
            for(int i=0;i<n;i++) {
                cout<<temp[i]<<" ";
            }
        }
    }
    else {
        cout<<"Enter a number bigger than 0"<<endl;
    }
    return 0;
}