#include <iostream>
using namespace std;
void premesti(int a[], int n){
    int k = 0;
    int transformed[100];
    for (int i = 0; i<n; i++) {
        if (a[i]>=0) {
            transformed[k] = a[i];
            k++;
        }
    }
    // for (int i = 0; i<k; i++) {
    //         cout<<transformed[i]<<" ";
    //     }


    for (int i = 0; i<n; i++) {
        if (a[i]<0) {
            transformed[k] = a[i];
            k++;
        }
    }
    for (int i = 0; i<n; i++) {
        cout<<transformed[i]<<" ";
    }
}
int main() {
    int n,a[100];
    cin>>n;
    for (int i = 0; i<n; i++) {
        cin>>a[i];
    }
    premesti(a,n);
    return 0;
}