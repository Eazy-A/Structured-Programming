#include <iostream>
using namespace std;
int main() {
    int z,a,b;
    float counter = 0, all=0;
    cin>>z;
    cin>>a>>b;
    while(a!=0 || b!=0) {
        all++;
        if (a+b==z) {
            counter++;
        }
        cin>>a>>b;
    }
    float procent = counter/all*100;
    cout<<"Vnesovte "<<counter<<" parovi od broevi chij zbir e "<<z<<endl;
    cout<<"Procentot na parovi so zbir "<<z<<" e "<<procent<<"%"<<endl;
    return 0;
}