#include <iostream>
using namespace std;
int main() {
    int a[100], n, sum = 0, counter = 0;
    cin>>n;
    for(int i=0;i<n;i++) {
        cin>>a[i];
        sum+=a[i];
        counter++;
    }
    float avg = sum/counter;
    for(int i=0;i<n;i++) {
        if(a[i]>avg) {
            cout<<a[i]<<" ";
        }
    }

}