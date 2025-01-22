#include <iostream>
using namespace std;
int main() {
    int d, m, y;
    cin >> d >> m >> y;
    if(y>0) {
        if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12) {
            if(d<=31) {
                cout<<"1"<<endl;
            }
            else {
                cout<<"0"<<endl;
            }
        }
        else if (m==4 || m==6 || m==9 || m==11) {
            if(d<=30) {
                cout<<"1"<<endl;
            }
            else {
                cout<<"0"<<endl;
            }
        }
        else if (m==2 && (y%4==0 || y%400==0) && y%100!=0) {
            if(d<=29) {
                cout<<"1"<<endl;
            }
            else if(d<=28) {
                cout<<"1"<<endl;
            }
            else {
                cout<<"0"<<endl;
            }
        }
        else {
            cout<<"0"<<endl;
        }
    }
    else {
        cout<<"0"<<endl;
    }
}