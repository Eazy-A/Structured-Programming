#include <iostream>
using namespace std;
int main() {
    int a,b,n;
    cin >> a >> b >> n;3
    for(int i = 1; i <= n-1; i++) {
        a=a*b;
        if(i<(n-1)) {
            cout<<a<<", ";
        }
        else if (i==(n-1)) {
            cout<<a<<" ";
        }
    }
}