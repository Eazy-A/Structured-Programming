#include <iostream>
using namespace std;
int stepen(int a) {
    int b = 1;
    for (int i = 1; i <= a; i++) {
        b*=10;
    }
    return b;
}
int main() {
    int a,b,counter=0,pk,prv,kraj,sred = 1,br=0;
    cin>>a>>b;
    for(int i=a;i<=b;i++) {
        pk = 0;
        sred = 1;
        counter = 0;
        int temp = i;
        int temp2 = i;
        while(temp>0) {
            temp/=10;
            counter++;
        }
        prv = temp2 / stepen(counter-1);
        kraj = temp2 % 10;
        pk = prv * 10 + kraj;
        temp2/=10;
        while (temp2>9) {
            int ld = temp2 % 10;
            sred = sred * ld;
            temp2/=10;
        }
        if (sred%pk == 0 && sred != 0) {
            cout<<i<<" -> ("<<sred<<" == "<<pk<<" * "<<sred/pk<<")"<<endl;
            br++;
        }
    }
    cout<<br<<endl;
}