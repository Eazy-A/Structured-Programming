#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

int main() {
    float suma, koeficient, maxkoef = -1.0;
    char sifra_tip[10], maxsifra_tip[10] = "";
    int tip, maxtip = 0;
    float vkupenkoef = 1;
    cin >> suma;
    while (true) {
        cin>>sifra_tip;
        if (strcmp(sifra_tip, "#") == 0) {
            break;
        }
        cin>>tip>>koeficient;
        if (koeficient > maxkoef) {
            maxkoef = koeficient;
            strcpy(maxsifra_tip, sifra_tip);
            maxtip = tip;
        }
        vkupenkoef *= koeficient;
    }
    cout<<maxsifra_tip<< " "<<maxtip<<" "<<maxkoef<<endl;
    cout<<suma * vkupenkoef<<endl;

    return 0;
}