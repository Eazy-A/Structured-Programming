#include <iostream>
using namespace std;
int main() {
    int a[100],temp[100],n;
    cin>>n;
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    for(int i=1;i<n;i++) {
        temp[i] = a[i-1];
    }
    temp[0] = a[n-1];
    for(int i=0;i<n;i++) {
        cout<<temp[i]<<" ";
    }
    return 0;

}