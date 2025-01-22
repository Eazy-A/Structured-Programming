#include <iostream>
#include <cstring>
using namespace std;
int svrznici(char recenica[]) {
    int numsvrz = 0;
    int bukvi;
    for (int i = 0; i<strlen(recenica); i++) {
        bukvi = 0;
        int j = 0;
        while (isalpha(recenica[i]) && recenica[i] != ' ' && !ispunct(recenica[i])) {
            bukvi++;
            i++;
        }
        if (bukvi > 0 && bukvi < 4) {
            numsvrz ++;
        }
    }
    return numsvrz;
}
int main() {
    char recenica[101];
    int maxsv = 0;
    char maxsvrz[101];
    while (cin.getline(recenica,101)) {
        if (svrznici(recenica)> maxsv) {
            maxsv = svrznici(recenica);
            strcpy(maxsvrz, recenica);
        }
    }
    cout<<maxsv<<": "<<maxsvrz<<endl;
    return 0;
}