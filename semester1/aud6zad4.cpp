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
int zbirnacifri(int n) {
    int zbir = 0, ld = 0;
    while(n>0) {
        ld = n%10;
        zbir = zbir + ld;
        n = n/10;
    }
    return zbir;
}
int main() {
    int counter=0;
    for(int i=2; i<=10000; i++) {
        if(eprost(i) && eprost(zbirnacifri(i))) {
            cout<<i<<endl;
            counter++;
        }
    }
    cout<<counter<<endl;
}