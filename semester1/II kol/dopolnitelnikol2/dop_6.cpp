#include <iostream>
using namespace std;
int par(int a[],int n) {
    int occ = 0;
    int temp [100] = {0};
    int k = 0;;
    for (int i = 0; i<n; i++) {
        occ = 0;
        for (int j = 0; j<n; j++) {
            if (a[j] == a[i]) {
                occ++;
            }
        }
        if (occ % 2 == 0) {
            temp[k] = a[i];
            k++;
        }
    }
    int min = temp[0];
    for (int i = 0; i<k; i++) {
        if (temp[i] < min) {
            min = temp[i];
        }
    }
    return min;
}
int main() {
    int n;
    cin>>n;
    int a[100];
    for (int i = 0; i<n; i++) {
        cin>>a[i];
    }
    if (par(a,n)) {
        cout<<"Najmaliot element koj se pojavuva paren broj pati e "<<par(a,n)<<endl;
    }
    else {
        cout<<"Nitu eden element ne se pojavuva paren broj pati!"<<endl;
    }
    return 0;
}