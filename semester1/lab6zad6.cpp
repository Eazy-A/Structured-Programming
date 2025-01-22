#include <iostream>
using namespace std;
int factoriel(int n) {
    int factor = 1;
    for (int i = 1; i <= n; i++) {
        factor *= i;
    }
    return factor;
}
int zbir(int n) {
    int z=0;
    for (int i = 1; i <= n; i++) {
        z += i;
    }
    return z;
}
int main() {
    int n,sum=0;
    cin>>n;
    for (int i = 1; i <= n; i++) {
    sum=sum+factoriel(zbir(i));
    }
    cout<<sum;
}