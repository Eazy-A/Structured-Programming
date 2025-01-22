#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s[100], maxstring[100] = {0};
    int firstDigit = -1, lastDigit = -1;
    int maxLen = 0;

    while (cin.getline(s, 100)) {
        if (s[0] == '0') break;

        int len = strlen(s);
        firstDigit = -1;
        lastDigit = -1;
        for (int i = 0; i < len; i++) {
            if (isdigit(s[i])) {
                if (firstDigit == -1) firstDigit = i;
                lastDigit = i;
            }
        }
        if (len > maxLen) {
            maxLen = len;
            if (firstDigit != -1 && lastDigit != -1) {
                int substringLen = lastDigit - firstDigit + 1;
                strncpy(maxstring, s + firstDigit, substringLen);
                maxstring[substringLen] = '\0';
            }
        }
    }

    cout << maxstring << endl;
    return 0;
}