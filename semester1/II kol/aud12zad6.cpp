#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;
int elozinka(char *s) {
    int b = 0, c = 0, sz = 0;
    for (int i = 0; i < strlen(s); i++) {
        if (isalpha(s[i])) {
            b = 1;
        }
        if (isdigit(s[i])) {
            c = 1;
        }
        if (iscntrl(s[i]) || ispunct(s[i])) {
            sz = 1;
        }
    }
    if (b == 1 && c == 1 && sz == 1) {
        return 1;
    }
    else return 0;
}
int main() {
    char password[100];
    cin.getline(password, 100);
    if (elozinka(password)) {
        cout<<password<<" e validna lozinka";
    }
    else {
        cout<<password<<" ne e validna lozinka";
    }
}