#include <iostream>
using namespace std;
int length(char s[]) {
    int len = 0;
    for (int i = 0 ; s[i] != '\0'; i++) {
        len ++;
    }
    return len;
}
int length_r(char s[]) {
    if (*s == '\0') {
        return 0;
    }
    return 1 + length_r(s+1);

}
int main() {
    char s[100];
    cin.getline(s,100);
    int t = length_r(s);
    cout<<t;

}