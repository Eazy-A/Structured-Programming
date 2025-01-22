#include <iostream>
using namespace std;
int sumDig(int n) {
    if(n == 0) return 0;
    return n%10 + sumDig(n/10);
}
int main() {
    int n;
    cin>>n;
    cout<<sumDig(n);
}