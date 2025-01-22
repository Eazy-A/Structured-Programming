#include <iostream>
using namespace std;
int main() {
    float max1,max2,temp,n;
    if(cin>>max1>>max2) {
        if(max2>max1) {
            temp=max1;
            max1=max2;
            max2=temp;
        }
    }
    while(cin>>n) {
        if(n>max1 && max1>max2) {
            max2=max1;
            max1=n;
        }
        else if (n<max1 && n>max2) {
            max2=n;
        }

    }
    cout<<max1<<" "<<max2;
    return 0;
}
