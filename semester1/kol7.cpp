#include <iostream>
using namespace std;
int main() {
    int m;
    cin>>m;
    if(m>3) {
        for(int i=1;i<=m-(m-1);i++) {
            cout<<"%";
            for(int j=1;j<=m-2;j++) {
                cout<<"@";
                if (j==m-3) {
                    cout<<"@%"<<endl;
                    break;
                }
            }
        }
        for(int k=1;k<=m-2;k++) {
            cout<<"%";
            for(int n=1;n<=m-1;n++) {
                cout<<".";
                if(n==m-2) {
                    cout<<"%"<<endl;
                    break;
                }
            }
        }
        for(int i=1;i<=m-(m-1);i++) {
            cout<<"%";
            for(int j=1;j<=m-2;j++) {
                cout<<"@";
                if (j==m-3) {
                    cout<<"@%"<<endl;
                    break;
                }
            }
        }
    }
    if(m==3) {
        cout<<"%@%"<<endl;
        cout<<"%.%"<<endl;
        cout<<"%@%"<<endl;
    }

}