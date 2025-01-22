#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

void opasna_funkcija(char *s) {
    int len = strlen(s);
    int j = 0;
    for (int i = 0; i < len; i++) {
        if (isdigit(s[i]) || iscntrl(s[i]) || ispunct(s[i])) {
            continue;
        }
        if (isalpha(s[i]) && isupper(s[i])) {
            s[j++] = tolower(s[i]);
        } else if (isalpha(s[i]) && islower(s[i])) {
            s[j++] = toupper(s[i]);
        } else {
            s[j++] = s[i];
        }
    }
    s[j] = '\0';
}

int main() {
    char s[100];
    cin.getline(s, 100);
    opasna_funkcija(s);
    cout << s;
}
