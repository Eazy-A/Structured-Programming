#include <iostream>
using namespace std;
int main() {
    char a[100], b[100];
    int poz, dolz;
    cin.getline(a,100);
    cin>>poz>>dolz;
    for (int i = poz; i <= poz+dolz; i++) {
        b[i] = a[i];
        cout<<b[i];
    }
}