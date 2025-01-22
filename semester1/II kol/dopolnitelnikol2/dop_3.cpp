#include <iostream>
#include <cstring>
using namespace std;
int main() {
    int n;
    cin>>n;
    cin.ignore();
    char string[51];
    char substring[] = "a1c";
    for (int i = 0; i<n; i++) {
        int counter = 0;
        cin.getline(string,51);
        for (int k = 0; k<strlen(string); k++) {
            string[k] = tolower(string[k]);
        }
        char *match = strstr(string, substring);
        while (match != nullptr) {
            counter++;
            match = strstr(match+1, substring);
        }
        if (counter > 1) {
            cout<<string<<endl;
        }
    }

}