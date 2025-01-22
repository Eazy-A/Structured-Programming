#include <iostream>
using namespace std;
bool isPrime(int n, int devisor) {
    if (devisor == 1) {
        return true;
    }
    if(n%devisor == 0 && n!=devisor) {
        return false;
    }
    return isPrime(n,devisor-1);
}
int nextPrime(int n) {
    if(isPrime(n+1,n+1)) {
        return n+1;
    }
    return nextPrime(n+1);
}
int main() {
    int n;
    cin>>n;
    cout<<nextPrime(n)-n<<endl;
}