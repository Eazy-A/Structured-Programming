#include <iostream>
using namespace std;
int main() {
  int n,ld,ld2;
  while(cin>>n){
    if(n<10) {
      continue;
    }
    int temp = n;
    int cikcak = 1;
    ld=n%10;
    ld2=(n%100)/10;
    bool flag = false;
    n = n/10;
    if(ld>ld2) {
      flag = true;
    }
    else if(ld2>ld) {
      flag = false;
    }
    else {
      continue;
    }
    while(n>9) {
      ld=n%10;
      ld2=(n%100)/10;
      if(flag) {
        if(ld2>ld) {
          flag = false;
          n=n/10;
        }
        else {
          cikcak = 0;
          break;
        }
      }
      else {
        if(ld>ld2) {
          flag = true;
          n=n/10;
        }
        else {
          cikcak = 0;
          break;
        }
      }
    }
    if(cikcak) {
      cout<<temp<<endl;
    }
  }
}
