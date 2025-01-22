#include <iostream>
using namespace std;
int countOccurances(int n,int m) {
    int occurance = 0;
    while (n>0) {
        int ld = n%10;
        if (ld==m) {
            occurance++;
        }
        n = n/10;
    }
    return occurance;
}

int main() {
    int m, n, p, br = 0;
    cin >> m >> n >> p;
    for(int i = m; ; i++) {
        if (countOccurances(i,n) == p) {
            cout << i << endl;
            br++;
        }
        if (br == 10) {
            break;
        }
    }
    return 0;
}