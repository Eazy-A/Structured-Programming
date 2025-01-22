#include <iostream>
using namespace std;
int factoriel(int n) {
    if (n == 1) {
        return 1;
    }
    return n * factoriel(n-1);
}
int zbir(int n) {
    if (n == 0) {
        return 0;
    }
    return n + zbir(n-1);
}
int main() {
    int n, result = 0;
    cin>>n;
    for (int i = 1; i <= n; i++) {
        result = result + factoriel (zbir(i));
    }
    cout<<result<<endl;
}
