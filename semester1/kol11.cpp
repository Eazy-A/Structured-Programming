#include <iostream>
using namespace std;
int main() {
    int n,ld;
    while (cin >> n) {
        if (n<=10) {
            continue;
        }
        int temp = n;
        ld = n%10;
        n = n/10;
        bool flag;
        int cikcak = 1;
        if (ld>=5) {
            flag = true;
        }
        else if (ld<5) {
            flag = false;
        }
        else {
            continue;
        }
        while(n>9) {
            ld = n%10;
            if (flag) {
                if (ld<5) {
                    flag = false;
                    n = n/10;
                }
                else {
                    cikcak = 0;
                    break;
                }
            }
            else {
                if(ld>=5) {
                    flag = true;
                    n = n/10;
                }
                else {
                    cikcak = 0;
                    break;
                }
            }
        }
        if(ld == n) {
            continue;
        }
        if(cikcak) {
            cout << temp <<endl;
        }
    }
}