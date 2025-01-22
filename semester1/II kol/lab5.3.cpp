#include <iostream>
using namespace std;
int main() {
    int a[100],n;
    cin>>n;
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    bool duplicate =  false;
    for(int i = n -1; i > 0 && !duplicate; i--) {
        for(int j = i-1; j >= 0 ; j--) {
            if(a[i] == a[j]) {
                for(int k = j;  k < n-1 ; k++) {
                    a[k] = a[k+1];
                }
                duplicate = true;
                n--;
                break;
            }
        }
    }
    for(int i=0;i<n;i++) {
        cout<<a[i]<<" ";
    }
}