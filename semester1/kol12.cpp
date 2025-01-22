#include <iostream>
using namespace std;
int main() {
  int n,smena = 0, max = 0, ld, pozmax = 0;;
  int b0=0,b1=0,b2=0,b3=0,b4=0;
  while(cin>>n) {
    if(n/100000 != 0 ) {
      continue;
    }
    smena = 0;
    pozmax = 0;
    max = 0;
    while(n>0) {
      ld = n%10;
      if (ld>max) {
        max = ld;
        pozmax = smena;
      }
      n = n/10;
      smena++;
    }
    if (pozmax == 0) {
      b0++;
    }
    if (pozmax == 1) {
      b1++;
    }
    if (pozmax == 2) {
      b2++;
    }
    if (pozmax == 3){
      b3++;
    }
    if (pozmax == 4) {
      b4++;
    }
  }
  cout<<"0: "<<b0<<endl;
  cout<<"1: "<<b1<<endl;
  cout<<"2: "<<b2<<endl;
  cout<<"3: "<<b3<<endl;
  cout<<"4: "<<b4<<endl;

}