#include <iostream>
using namespace std;
int main() {
    int a[100],n;
    cin>>n;
    bool rastecka = true;
    bool opagacka = true;
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++) {
        if(a[i]<=a[i+1]) {
            opagacka = false;
        }
        if(a[i]>=a[i+1]) {
            rastecka = false;
        }
    }

    if (rastecka) {
        cout<<"Rastecka"<<endl;
    }
    else if (opagacka) {
        cout<<"Opagacka"<<endl;
    }
    else {
        cout<<"Ni rastecka ni opagacka"<<endl;
    }
}