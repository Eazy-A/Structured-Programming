#include <iostream>
using namespace std;
int vodenovi(int a) {
    int zbir = 0;
    int y = a%10000;
    int m = a/10000%100;
    int d = a/1000000;
    if (m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12) {
        zbir = d + m*31 + y*365;
    }
    else if (m==2) {
        zbir = d + m*28 + y*365;
    }
    else {
        zbir = d + m*30 + y*365;
    }
    return zbir;
}

int main() {
    int today, n, date;
    cin>>today;
    cin>>n;
    for(int i=0;i<n;i++) {
        cin>>date;
        if (vodenovi(today) - vodenovi(date) >= 18*365) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}