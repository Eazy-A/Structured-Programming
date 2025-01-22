#include <iostream>
#include <cctype>
#include <string.h>
using namespace std;
char first_uppercase(char *s, int n) {
    if (isupper(s[n])) {
        return s[n];
    }
    if (n == strlen(s)) {
        return 0;
    }
    return first_uppercase(s, n+1);
}
int main() {
    char s[100];
    cin.getline(s,100);
    if (first_uppercase(s,0)) {
        cout<<first_uppercase(s,0);
    }
    else {
        cout<<"Nema";
    }
}