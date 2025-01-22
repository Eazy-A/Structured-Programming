#include <iostream>
using namespace std;
bool eprost(int n) {
    for(int i=2; i<=n/2; i++) {
        if(n%i==0) {
            return false;
        }
    }
    return true;
}
int main() {
    int n,pogolem=0;
    cin>>n;
    for(int i=n+1; i<n+10; i++) {
        if(eprost(i)) {
            pogolem = i;
            break;
        }
    }
    cout << pogolem-n << endl;
}