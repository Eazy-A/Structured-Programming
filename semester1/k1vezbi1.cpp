#include <iostream>
using namespace std;
int main() {
    int m,n,ld = 0;
    bool proverka = false;
    cin>>m>>n;
    for(int i=m; i<=n; i++) {
        int temp = i;
        int counter = 0;
        int cifri = 0;
        while(temp>0) {
            counter++;
            ld = temp % 10;
            if (ld % 2 == 0) {
                cifri++;
            }
            temp/=10;
        }
        if (counter == cifri) {
            cout<<i<<endl;
            proverka = true;
            break;
        }
    }
    if (proverka == false) {
        cout<<"NE"<<endl;
    }
    return 0;
}
