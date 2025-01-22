#include <iostream>
using namespace std;
int main() {
    int n,a,sumpar=0,sumnepar=0;
    cin>>n;
    for (int i = 1; i <= n; i++) {
        cin>>a;
        if (i % 2 == 0) {
            sumpar += a;
        }
        else {
            sumnepar += a;
        }
    }
    cout<<sumnepar<<endl;
    cout<<sumpar<<endl;
}

