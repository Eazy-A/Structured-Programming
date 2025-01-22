#include <iostream>
using namespace std;

int main() {
    char a;
    int sum = 0, num = 0;
    bool broj = false;

    while (cin >> noskipws >> a && a != '!') {
        if (a >= '0' && a <= '9') {
            num = num * 10 + (a - '0');
            broj = true;
        } else {
            if (broj) {
                sum += num;
                num = 0;
                broj = false;
            }
        }
    }
    if (broj) {
        sum += num;
    }
    cout << sum << endl;
    return 0;
}
