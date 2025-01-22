#include <iostream>
using namespace std;
int zbirnacif(int n) {
    return n/100 + n%100;
}

int main(){
    for(int i=1000; i<10000; i++) {
    if (i%zbirnacif(i)==0) {
        cout << i << endl;
    }
    }
    return 0;
}