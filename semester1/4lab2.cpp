#include <iostream>
using namespace std;
int main() {
    int m, n, p, counter, br = 0;
    cin >> m >> n >> p;
    for(int i = m; ; i++) {
        int temp = i;
        counter = 0;
        while (temp > 0) {
            int ld = temp % 10;
            if (ld == n) {
                counter ++;
            }
            temp /= 10;
        }
        if (counter == p) {
            cout << i << endl;
            br++;
        }
        if (br == 10) {
            break;
        }
    }
    return 0;
}