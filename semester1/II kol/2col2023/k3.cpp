#include <iostream>
using namespace std;
void pecati(int n) {
    if (n<=0) {
        cout<<n<<" ";
        return;
    }
    cout<<n<<" ";
    pecati(n-5);
    cout<<n<<" ";
}

int main() {
    int n;
    cin>>n;
    pecati(n);
}