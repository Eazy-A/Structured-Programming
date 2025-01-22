#include <iostream>
using namespace std;
int main() {
    int a[100][100],n,m,x,y,sum1=0,sum2=0,sum3=0,sum4=0;
    cin>>n>>m;
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cin>>a[i][j];
        }
    }
    cin>>x>>y;
    for(int i=0;i<x;i++) {
        for(int j=y;j<m;j++) {
            sum1=sum1+a[i][j];
        }
    }
    for(int i=0;i<x;i++) {
        for(int j=0;j<y;j++) {
            sum2=sum2+a[i][j];
        }
    }
    for(int i=x;i<n;i++) {
        for(int j=0;j<y;j++) {
            sum3=sum3+a[i][j];
        }
    }
    for(int i=x;i<n;i++) {
        for(int j=y;j<m;j++) {
            sum4=sum4+a[i][j];
        }
    }
    cout<<sum1<<" "<<sum2<<" "<<sum3<<" "<<sum4;
}