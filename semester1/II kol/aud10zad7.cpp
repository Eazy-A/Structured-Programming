//evklidov algoritam
#include <iostream>
using namespace std;
int gcd(int m, int n) {
    if(m%n==0) {
        return n;
    }
    return gcd(n,m%n);
}
int main() {
    int a[100],n;
    cin>>n;
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    int nzd = a[0];
    for(int i=0;i<n;i++) {
        nzd = gcd(nzd,a[i]);
    }
    cout<<nzd<<endl;
}