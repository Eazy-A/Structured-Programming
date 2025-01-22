#include <iostream>
#include <string.h>
using namespace std;
int main() {
    int n, x, g,m;
    char s[81];
    cin>>n>>x;
    x = x % 26;
    for (int i = 0; i<=n; i++) {
        cin.getline(s,81);
        for (int k = 0; k<strlen(s); k++) {
            g = 0, m = 0;
            if (isalpha(s[k])) {
                if (islower(s[k]) && s[k] + x > 'z'){
                    m = x - 26;
                    s[k] = s[k] + m;
                }
                else if (isupper(s[k]) && s[k] + x > 'Z'){
                    g = x - 26;
                    s[k] = s[k] + g;
                }
                else {
                    s[k] = s[k] + x;
                }
            }
        }
        cout<<s;
        if (i >= 1) {
            cout<<endl;
        }
    }
    return 0;
}