#include <iostream>
using namespace std;
int main() {
    int n;
    float sum=0,counter=0;
    cin>>n;
    if (n%2==1) {
        n--;
    }
    for(int i = n; i>0 ;i-=2) {
        cout<<i<<"*"<<i<<"="<<i*i<<endl;
        sum=sum+(i*i);
        counter++;
    }
    cout<<sum<<endl;
    float avg=sum/counter;
    cout<<avg<<endl;
}