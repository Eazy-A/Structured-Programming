#include <iostream>
#include <cstring>
using namespace std;
char find(char *s, int n) {
    if (!isalnum(s[n]) && s[n]!=' ') {
        return s[n];
    }
    return find(s, n+1);
}
int main() {
    char s[100];
    cin.getline(s,100);
    if (find(s,0)) {
        cout<<find(s,0);
    }
    else {
        cout<<"Nema";
    }
}