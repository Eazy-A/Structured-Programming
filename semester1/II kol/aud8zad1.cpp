#include <iostream>
using namespace std;
int main() {
    int a[100],b[100];
    int an,bn;
    cin>>an>>bn;
    bool isti = true;
    if(an == bn) {
        for(int i=0;i<an;i++) {
            cin>>a[i];
        }
        for(int i=0;i<an;i++) {
            cin>>b[i];
        }
        for(int i=0;i<an;i++) {
            if(a[i] != b[i]) {
                isti = false;
            }
        }
    }
    else {
        isti = false;
    }
    if(isti) {
        cout<<"Nizite se isti"<<endl;
    }
    else {
        cout<<"Nizite se razlicni"<<endl;
    }
    return 0;
}