#include <iostream>
using namespace std;
int main() {
    int p,q,a;
    float pg=0,pm=0,is=0;
    cin>>p>>q;
    for(int i=0;i<p;i++) {
        cin>>a;
        if(a>q) {
            pg++;
        }
        else if(a<q) {
            pm++;
        }
        else {
            is++;
        }
    }
        float pogolemo,pomalo,ednakvo;
        pogolemo=(pg/p)*100;
        pomalo=(pm/p)*100;
        ednakvo=(is/p)*100;
        cout<<"pogolemi "<<pogolemo<<endl;
        cout<<"pomali "<<pomalo<<endl;
        cout<<"ednakvo "<<ednakvo<<endl;
    }
