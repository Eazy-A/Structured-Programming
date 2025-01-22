#include <iostream>
using namespace std;

bool raz(int x, int n) {
    while (x > 0) {
        int ld = x % 10;
        int temp = n;
        while (temp > 0) {
            int ld2 = temp % 10;
            if (ld == ld2) {
                return false;
            }
            temp /= 10;
        }
        x /= 10;
    }
    return true;
}

int main() {
    long long int n, x;
    cin >> n >> x;
    for (long long int i = n - 1; i >= 0; i--) {
        if (raz(x, i) && raz(i, x)) {
            cout << i << endl;
            break;
        }
    }
}
