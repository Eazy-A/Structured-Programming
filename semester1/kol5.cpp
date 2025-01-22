#include <iostream>
using namespace std;

bool parnost(long long int a, long long int b) {
    int ldb, lda;
    bool flag = false;

    while (b > 0) {
        ldb = b % 10;
        b /= 10;

        if (a == 0) {
            return false;
        }

        lda = (a / 10) % 10;
        a /= 100;

        if (ldb == lda) {
            flag = true;
        } else {
            return false;
        }
    }
    return flag;
}

int main() {
    long long int a, b;
    cin >> a >> b;
    if (a <= 0 || b <= 0) {
        cout << "Invalid input" << endl;
    } else {
        if (parnost(a, b) || parnost(b, a)) {
            cout << "PAREN" << endl;
        } else {
            cout << "NE" << endl;
        }
    }
    return 0;
}
