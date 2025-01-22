#include <iostream>
using namespace std;
int main() {
    int n,max = 0, ld;
    float sum = 0, counter = 0;
    while(cin>>n) {
        counter++;
        max = 0;
        while(n>0) {
            ld = n % 10;
            if(ld>max) {
                max = ld;
            }
            n = n/10;
        }
        sum = sum + max;
        cout<<max<<endl;
    }
    float avg = sum/counter;
    cout<<avg<<endl;
    return 0;
}
