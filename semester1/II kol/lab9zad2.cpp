#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

bool ePalindrom(char *s, int start, int end) {
    while (start < end) {
        if (tolower(s[start]) != tolower(s[end])) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

int brojpalindrom(char *line) {
    int len = strlen(line);
    int start = 0, counter = 0;
    for (int i = 0; i <= len; i++) {
        if (line[i] == ' ' || line[i] == '\0') {
            if (ePalindrom(line, start, i - 1)) {
                counter++;
            }
            start = i + 1;
        }
    }
    return counter;
}

int main() {
    int n;
    cin >> n;
    cin.ignore();
    char recenica[100];
    for (int i = 0; i < n; i++) {
        cin.getline(recenica, 100);
        cout << recenica << ": " << brojpalindrom(recenica) << endl;
    }
}
