#include <iostream>
#include <ranges>
using namespace std;
int main() {
    int a[100],n,sumpar = 0, sumnepar = 0;
    float par = 0, nepar = 0;
    cin>>n;
    for (int i = 0; i < n; i++) {
        cin>>a[i];
        if(a[i]%2==0) {
            sumpar = sumpar + a[i];
            par ++;
        }
        else {
            sumnepar = sumnepar + a[i];
            nepar ++;
        }
    }
    cout<<"Sum even: "<<sumpar<<endl;
    cout<<"Sum odd: "<<sumnepar<<endl;
    cout<<"Rel: "<<par / nepar<<endl;

}