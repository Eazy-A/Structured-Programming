#include <iostream>
using namespace std;
int main() {
    int a[100], n;
    int pogolem;
    cin>>n;
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    for(int i=0;i<n;i++) {
        pogolem = 0;
        for(int j=0;j<n;j++) {
            if(a[i]<=a[j]) {
                pogolem++;
            }
        }
        cout<< "["<< i << "]" << a[i] <<":" << pogolem <<endl;
    }
}