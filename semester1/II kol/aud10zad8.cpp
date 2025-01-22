//      a*b/gcd - formula za lcm
#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;
}

int main() {
    int a[100], n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int nzs = a[0];
    for (int i = 1; i < n; i++) {
        nzs = lcm(nzs, a[i]);
    }

    cout << nzs << endl;
    return 0;
}
