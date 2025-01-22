#include <iostream>
#include <cstring>
using namespace std;
int count_occ(char *poceten, char *glaven) {
    int counter = 0;
    for (int i = 0; i <= strlen(glaven)-strlen(poceten); i++) {
        bool flag = true;
        if (glaven[i] == poceten[0]) {
            for (int j = 0; j < strlen(poceten); j++) {
                if (glaven[i+j] != poceten[j]) {
                    flag = false;
                    break;
                }
            }
            if (flag) {
                counter++;
            }
        }
    }
    return counter;
}
int main() {
    char poceten[20], glaven[100];
    int lista[100] = {0};
    int n, max = 0;
    cin.getline(poceten, 20);
    cin>>n;
    cin.ignore();
    for (int i = 0; i<n; i++) {
        cin.getline(glaven, 100);
        int a = count_occ(poceten,glaven);
        if (a > max) {
            max = a;
        }
        lista[a] = lista[a] + 1 ;
    }
    for (int i = 0; i <= max; i++) {
        cout<<i<<": "<<lista[i]<<endl;
    }
}