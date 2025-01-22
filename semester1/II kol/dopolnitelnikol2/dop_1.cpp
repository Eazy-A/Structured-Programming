#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
bool isPalindrome(char *s) {
    if (s == NULL) return false;

    int len = strlen(s);
    int left = 0;
    int right = len - 1;

    while (left < right) {
        if (s[left] != s[right]) {
            return false;
        }
        left++;
        right--;
    }
    return true;
}
bool hasSpecaialCharacter(char *s) {
    for (int i = 0; i<strlen(s); i++) {
        if (!isalnum(s[i])) {
            return true;
            break;
        }
    }
    return false;
}
int main() {
    int n;
    char s[81];
    cin>>n;
    cin.ignore();
    int maxlen = 0;
    char maxs[81] = {0};
    for (int i = 0; i < n; i++) {
        cin.getline(s,81);
        if (strlen(s) > maxlen && isPalindrome(s) && hasSpecaialCharacter(s)) {
            maxlen = strlen(s);
            for (int k = 0; k<strlen(s); k++) {
                maxs[k] = s[k];
            }
        }
    }
    if (maxlen > 0 && isPalindrome(maxs) && hasSpecaialCharacter(maxs)) {
        for (int i = 0; i<maxlen; i++) {
            cout<<maxs[i];
        }
    }
    else {
        cout<<"Nema!"<<endl;
    }
    }