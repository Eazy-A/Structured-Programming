#include <iostream>
using namespace std;
int main() {
    int n,ld,ld2,broj;
    cin>>n;
    int counter = 0;
    while(n>9) {
        ld = n%10;
        ld2 = (n%100)/10;
        n = n/100;
        broj = ld+ld2;
        if(broj < 10) {
            n = n * 10 + broj;
        }
        else {
            n = n * 100 + broj;
        }
        cout<<n<<endl;
        counter++;
    }
}