#include <iostream>
using namespace std;
void opasna_funkcija(int *a,int *n) {
    int max = a[0], min = a[0], sum = 0;
    for(int i=0;i<*n;i++) {
        if (a[i]>max) {
            max = a[i];
        }
        if (a[i]<min) {
            min = a[i];
        }
        sum += a[i];
    }
    int diff = max - min;
    for(int i=0;i<*n;i++) {
        a[i] = a[i] + diff;
    }
    cout<<"max = "<<max<<endl;
    cout<<"min = "<<min<<endl;
    cout<<"sum = "<<sum<<endl;
    for(int i=0;i<*n;i++) {
        cout<<a[i]<<" ";
    }

}
int main() {
    int a[100],n;
    cin>>n;
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    opasna_funkcija(a,&n);
}

