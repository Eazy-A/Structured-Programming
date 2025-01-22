//vnesuvas broj nimber i broj k koristis funkcija da ti go markirat cifrata so 0 ili 1 input:77134 5 output:11000
#include <iostream>
using namespace std;
void pogolem(int n, int k) {
    if (n == 0) {
        return;
    }
    pogolem(n/10, k);
    if (k<=n%10) {
        cout<<"1";
    }
    else {
        cout<<"0";
    }
}
int main() {
    int n,k;
    cin>>n>>k;
    pogolem(n,k);
}