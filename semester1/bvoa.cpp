#include <iostream>
using namespace std;
int main() {
    int a, b, counter=0;
    cin>> a >> b;
    if (b<0 || b>9) {
        cout<<"Invalid Input";
    }
    else {
        while(a > 0) {
            int c = a%10;
            if(c == b) {
                counter++;
            }
            a = a/10;
        }
        cout<<counter;
    }
    return 0;
}