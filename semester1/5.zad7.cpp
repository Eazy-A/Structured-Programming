#include <iostream>
using namespace std;
int main() {
    int n,max;
    if(cin>>n) {
        if(n<=100) {
            max=n;
        }
    }
    else {
        cout<<"Nepravilen input"<<endl;
        return 1;
    }
        while (cin>>n) {
            int temp=n;
            if(temp>max) {
                if(temp<=100) {
                    max=temp;
                }
            }
        }
    cout<<max<<endl;
}
