#include <iostream>
using namespace std;
float deff(int n) {
    if(n==1) {
        return 1;
    }
    if (n==2) {
        return 2;
    }
    return (n-1)*deff(n-1)/n+deff(n-2)/n;
}
int main() {
    int n;
    cin>>n;
    cout<<deff(n)<<endl;
}