#include <iostream>
using namespace std;
int main() {
    int rev,ld=0;
    int a,b;
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        rev=0;
        int temp=i;
        while(temp!=0) {
            ld=temp%10;
            rev=rev*10+ld;
            temp/=10;
        }
            if(rev==i) {
                cout<<i<<endl;
            }

        }

    }
