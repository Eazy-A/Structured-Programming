#include <iostream>
using namespace std;
float procent(float a, float b) {
    float pr = a / b * 100;
    return pr;
}
void ocena(float a) {
    if (a>=90) {
        cout<<"10"<<endl;
    }
    if (a>=80 && a<90) {
        cout<<"9"<<endl;
    }
    if (a>=70 && a<80) {
        cout<<"8"<<endl;
    }
    if (a>=60 && a<70) {
        cout<<"7"<<endl;
    }
    if (a>=50 && a<60) {
        cout<<"6"<<endl;
    }
    if (a<50) {
        cout<<"FAIL"<<endl;
    }
}
int main() {
    int n,a,b;
    cin>>n;
    for(int i=0;i<n;i++) {
        cin>>a>>b;
        cout<<procent(a,b)<<" ";
        float k = procent(a,b);
        ocena(k);
    }
    return 0;
}