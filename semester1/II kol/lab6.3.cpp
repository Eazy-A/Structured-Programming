#include <iostream>
using namespace std;
int main() {
    int a[100][100], b[100][100],n,m,q,w,counter=0;
    cin>>n>>m;
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cin>>a[i][j];
        }
    }
    cin>>q>>w;
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cin>>b[i][j];
        }
    }
    for(int j=0;j<m;j++) {
        bool match = true;
        for(int i=0; i<n;i++) {
            if  (a[i][j] != b[i][j]) {
                match = false;
                break;
            }
        }
        if(match) {
            counter++;
        }
    }
    cout<<counter;
}