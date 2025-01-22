#include <iostream>
#include <cstring>
using namespace std;
bool isPalindrome(char *s) {
    for (int i=0; i <= strlen(s)/2; i++) {
        if (s[i] != s[strlen(s) - i -1]) {
            return false;
        }
    }
    return true;
}
int main() {
    char s[100];
    cin.getline(s,100);
    if (isPalindrome(s)) {
        cout<<"e palindrom";
    }
    else {
        cout<<"ne e palindrom";
    }
}