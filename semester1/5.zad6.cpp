#include <iostream>
using namespace std;
int main() {
    int n,max;
    if(cin>>n) {
        max=n;
    }
    else {
        cout<<"Nepravilen input"<<endl;
        return 1;
    }
    while (cin>>n) {
        int temp=n;
        if(temp>max) {
            max=temp;
        }
    }
    cout<<max<<endl;
}
