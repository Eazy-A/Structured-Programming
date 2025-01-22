#include <iostream>
#include <cmath>
using namespace std;

int mostSignificantDigit(int n) {
    while (n >= 10) {
        n /= 10;
    }
    return n;
}

int main() {
    int n;
    while (true) {
        cin >> n;
        if (n == 0) {
            break;
        }

        int maxDigit = -1, maxNum = 0;

        for (int i = 0; i < n; i++) {
            int num;
            cin >> num;
            int msd = mostSignificantDigit(num);
            if (msd > maxDigit) {
                maxDigit = msd;
                maxNum = num;
            }
        }

        cout << maxNum << endl;
    }

    return 0;
}
