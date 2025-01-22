#include <iostream>
using namespace std;
int vodekaden(char n) {
    if (n>='0' && n<='9') {
        return n - '0';
    }
    if (n>='A' && n<='F') {
        return n - 'A' + 10;
    }
    if (n>='a' && n<='f') {
        return n - 'a' + 10;
    }
}

int main() {
    char a;
    int sum = 0;
    while (cin>>a && a!='.') {
        sum += vodekaden(a);
    }
    if (sum % 16 == 0 && sum % 100 == 16) {
        cout<<"Poln pogodok"<<endl;
    }
    else if(sum % 16 == 0 ) {
        cout<<"Pogodok"<<endl;
    }
    else {
        cout<<sum<<endl;
    }
    return 0;
}