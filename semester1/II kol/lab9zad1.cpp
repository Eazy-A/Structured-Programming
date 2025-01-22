#include <iostream>
#include <cctype>
using namespace std;
void transform(char *text) {
    for (int i=0; text[i] != '\0'; i++) {
        if (text[i] == 'a' || text[i] == 'e' || text[i] == 'i' || text[i] == 'o' || text[i] == 'u' ||text[i] == 'A' || text[i] == 'E' || text[i] == 'I' || text[i] == 'O' || text[i] == 'U') {
            text[i] = toupper(text[i]);
        }
        else {
            text[i] = tolower(text[i]);
        }
    }
}
int main(){
    char s[100];
    cin.getline(s,100);
    transform(s);
    cout<<s;
}