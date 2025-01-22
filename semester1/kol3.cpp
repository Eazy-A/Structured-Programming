#include <iostream>
using namespace std;
int sumdelitel(int n) {
    int sum = 0;
    for(int i=n; i>0; i--) {
        if (n%i==0) {
            sum = sum + i;
        }
    }
    return sum;
}
int main() {
    int n,max=0,broj;
    cin>>n;
    for(int i=(n-1); i>0; i--) {
        if (sumdelitel(i) > max) {
            max = sumdelitel(i);
            broj = i;
        }
    }
    cout<<broj;

}
