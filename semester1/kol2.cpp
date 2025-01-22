#include <iostream>
using namespace std;
int rev(int n) {
    int rev = 0,ld = 0;
    while (n > 0) {
        ld = n % 10;
        rev = rev * 10 + ld;
        n = n / 10;
    }
    return rev;
}
int brcifri(int n) {
    int counter = 0;
    while (n > 0) {
        counter++;
        n=n/10;
    }
    return counter;
}
int main() {
    int n;
    cin>>n;
    if(n>9) {
        for(int i=(n-1);i>0;i--) {
            if(rev(i)%brcifri(i)==0) {
                cout<<i<<endl;
                break;
            }
        }
    }
    else {
        cout<<"Brojot ne e validen"<<endl;
    }
    return 0;
}