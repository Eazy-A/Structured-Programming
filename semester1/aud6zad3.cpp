#include <iostream>
using namespace std;
int eprost(int n) {
    for(int i=1; i<=n/2; i++) {
        if(n%i==0) {
            return false;
        }
        return true;
    }
}
int main() {
    int n,pogolem;
    for(int i=n; i<n+10; i++) {
        if(eprost(i)) {
            pogolem = i;
            break;
        }
    }
    cout << pogolem-n << endl;
    }