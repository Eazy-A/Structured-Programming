#include <iostream>
using namespace std;
int count_up(int n) {
    if(n == 0) {
        cout<<0<<" ";
        return 0;
    }
    count_up(n-1);
    cout<<n<<" ";
    return n;
}
int main() {
    int n;
    cin>>n;
    count_up(n);
}