#include <iostream>
using namespace std;
int main() {
    int n,max=0,prmax=0,ld,sum=0;
    bool eprv=true;
    while(cin>>n) {
        int temp = n;
        sum = 0;
        max = 0;
        while(temp>0) {
            ld = temp%10;
            if (ld>max) {
                max = ld;
            }
            sum = sum+ld;
            temp = temp/10;
        }
        if(eprv) {
            cout<<n<<": "<<sum<<endl;
            eprv = false;
        }
        else {
            cout<<n<<": "<<sum+prmax<<endl;
        }
        prmax = max;

    }
}