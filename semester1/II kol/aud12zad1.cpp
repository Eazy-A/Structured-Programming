#include <iostream>
#include <cctype>
using namespace std;
int count(char n[],char s) {
    int counter = 0;
    s = tolower(s);
    for (int i=0; n[i] != '\0';i++) {
        n[i] = tolower(n[i]);
        if (n[i] == s) {
            counter ++;
        }
    }
    return counter;
}
int main() {
    char n[100],s;
    cin.getline(n,100);
    cin>>s;
    cout<<count(n,s);

}