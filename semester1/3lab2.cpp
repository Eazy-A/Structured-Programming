#include <iostream>
using namespace std;
int main() {
    int x, ld=0, rev=0, c = 0;
    cin >> x;
    for (int i = x; i > 0; i--) {
            int temp = i;
            rev = 0;
            int sum = 0;
            while(temp > 0 ) {
                ld = temp % 10;
                rev = rev * 10 + ld;
                sum = sum + ld;
                temp = temp / 10;
            }
            if (rev == i && i % sum == 0 ) {
                cout << i << endl;
                c++;
            }
        if(c==10) {
            break;
        }
    }
    return 0;
}