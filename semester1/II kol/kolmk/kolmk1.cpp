#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char s[100];
    int counter = 0;
    while (s[0]!='#') {
        cin.getline(s,100);
        for (int i = 0; i<strlen(s); i++) {
            bool neebukva = false;
            s[i] = tolower(s[i]);
            s[i+1] = tolower(s[i+1]);
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
                // if (!isalnum(s[i+1])) {
                //     neebukva = true;
                // }
                // if (neebukva) {
                //     // cout<<"flago e izvrsen";
                //     i++;
                //     if (s[i+1] == 'a' || s[i+1] == 'e' || s[i+1] == 'i' || s[i+1] == 'o' || s[i+1] == 'u') {
                //         cout<<s[i-1]<<s[i+1]<<endl;
                //         counter++;
                //     }
                // }
                // else
                if (s[i+1] == 'a' || s[i+1] == 'e' || s[i+1] == 'i' || s[i+1] == 'o' || s[i+1] == 'u') {
                    // cout<<"obicen output";
                    cout<<s[i]<<s[i+1]<<endl;
                    counter++;
                }
            }
        }
    }
    cout<<counter;
}