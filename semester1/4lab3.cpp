#include <iostream>
using namespace std;
int stepen(int a) {
    int b=1;
    for(int i=1;i<=a;i++) {
        b = b * 10;
    }
    return b;
}
int main() {
    int n, m;
    int cn = 0, counter = 0;
    cin >> n;
    int temp = n;
    while (temp > 0) {
        temp = temp / 10;
        cn++;
    }
    while(cin>>m) {
        if(m>n){
            int temp2 = m;
            counter = 0;
            while(temp2>0) {
                if(temp2%10 == n%10) {
                    int ld = temp2 % stepen(cn);
                    if (ld == n) {
                        counter++;
                    }
                    temp2 = temp2 / stepen(cn);
                }
                else {
                    temp2 = temp2 / 10;
                }
            }
            cout<<m<<" "<<counter<<endl;
        }
        else {
            cout<<"Brojot "<<n<<" ne se sodrzi vo "<<m<<endl;
        }
    }
    return 0;
}