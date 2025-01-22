#include <iostream>
using namespace std;
int main() {
    int a[100], temp[100];
    int n,tempsize = 0;
    cin>>n;
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }
    for(int i=0;i<n;i++) {
        bool isduplicate=false;
        for(int j=0;j<n;j++) {
            if(a[i]==temp[j]) {
                isduplicate=true;
                break;
            }
        }
        if(!isduplicate) {
            temp[tempsize++]=a[i];
        }
    }
    for(int i=0;i<tempsize;i++) {
        cout<<temp[i]<<" ";
    }
    return 0;
}
