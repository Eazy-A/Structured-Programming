#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main() {
    char str[301], c;
    cin.getline(str,301);
    cin>>c;
    c = tolower(c);
    int len = strlen(str);
    int f = -1, l = -1;
    for (int i = 0; i < len; i++) {
        if (tolower(str[i]) == c) {
            if (f == -1) f = i;
            l = i;
        }
    }
    if (f != -1 && l != -1) {
        for (int i = f; i <= l; i++) {
            cout << str[i];
        }
        cout << endl;
    }
    return 0;
}
