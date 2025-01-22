#include <iostream>
using namespace std;
int main() {
  int i,n;
  float counter = 0, all = 0;
  cin>> i >> n;
  while (i > 0){
    all++;
    int ld = i % 10;
    if (ld < n) {
      counter++;
    }
    i = i / 10;
  }
  float procent = counter/all*100;
  cout << procent <<" %"<<endl;
  return 0;
}
