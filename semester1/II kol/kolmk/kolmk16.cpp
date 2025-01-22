#include <iostream>
using namespace std;
int max_digit(int n) {
    if (n == 0) {
        return 0;
    }
    int ld = n % 10;
    int max = max_digit(n/10);
    if (ld > max) {
        max = ld;
    }
    return max;
}
int main() {
    int n;
    while (cin>>n) {
        cout<<max_digit(n)<<endl;
    }
    return 0;
}