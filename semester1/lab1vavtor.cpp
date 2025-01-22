#include <iostream>
using namespace std;
int main() {
    int x,sum;
    cin >> x;
    for (int i = 10; i < 100; i++) {
        if (i%x==0) {
            sum=(i/10)+(i%10);
            if (sum%x==0) {
                cout<<i<<endl;
            }
        }
    }
}