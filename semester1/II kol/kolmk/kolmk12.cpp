#include <iostream>
using namespace std;

int BrojPozitivni(int niza[], int n) {
    if (n == 0) {
        return 0;
    }
    if (niza[n - 1] > 0) {
        return 1 + BrojPozitivni(niza, n - 1);
    }
        return BrojPozitivni(niza, n - 1);
}

int main() {
    int niza[100];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> niza[i];
    }
    cout << BrojPozitivni(niza, n) << endl;
    return 0;
}
