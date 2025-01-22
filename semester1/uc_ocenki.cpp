#include <iostream>
using namespace std;
int main() {
    float t,n,a,odlicno=0,dobro=0,nedovolno=0;
    cin>>n>>t;
    for(int i=0;i<n;i++) {
        cin>>a;
        if(a>=t) {
            odlicno++;
        }
        else if(a<t && a>=(t/2)) {
            dobro++;
        }
        else if(a<(t/2)) {
            nedovolno++;
        }

    }
    cout<<"odlicni se: " << odlicno/n*100<<"%"<<endl;
    cout<<"dobri se: " << dobro/n*100<<"%"<<endl;
    cout<<"nedovolni se: " << nedovolno/n*100<<"%"<<endl;

}