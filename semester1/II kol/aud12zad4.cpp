#include <iostream>
#include <cstring>
using namespace std;

int isSubstring(char *s1, char *s2) {
    int d1 = strlen(s1);
    int d2 = strlen(s2);
    if (d2 > d1) {
        return 0;
    }
    for (int i = 0; i <= d1 - d2; i++) {
        if (strncmp(s2, s1 + i, d2) == 0) {
            return 1;
        }
    }
    return 0;
}

int main() {
    char s1[100], s2[100];
    cin.getline(s1, 100);
    cin.getline(s2, 100);
    cout << isSubstring(s1, s2);
}
