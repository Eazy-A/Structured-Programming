#include <iostream>
using namespace std;
int counter = 0;
int count8(int n) {
    int ld = n%10;
    int sld = n%100/10;
    if(n == 0) {
        return 0;
    }
    if(ld == 8 && sld == 8) {
        return 2 + count8(n/10);
    }
    if (ld == 8){
        return 1 + count8(n/10);
    }
    return count8(n/10);
}
int main() {
    int n;
    cin>>n;
    cout<<count8(n);

}