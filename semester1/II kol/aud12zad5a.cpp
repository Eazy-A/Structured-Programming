#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

bool isPalindrome(char *s) {
    int len = strlen(s);
    int start = 0, end = len-1;
    while (start<end) {
        while (!isalnum(s[start])) {

            start++;
        }
        while (!isalnum(s[end])) {
            end--;
        }
        if (tolower(s[start]) != tolower(s[end])) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

int main() {
    char s[100];
    cin.getline(s, 100);
    cout << isPalindrome(s);
}
