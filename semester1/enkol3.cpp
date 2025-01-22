#include <iostream>
using namespace std;

void prvred(int n) {
    for (int i = 1; i <= n; i++) {
        cout << "+";
    }
    cout << endl;
}

void sred(int n) {
    for(int i = 2; i < n; i++) {
        cout<<"+";
        for(int j = 2; j < n; j++) {
            cout<<"-";
        }
        cout<<"+"<<endl;
    }
}

int main() {
    int n;
    cin >> n;

    if (n < 2) {
        cout << "Invalid input" << endl;
        return 0;
    }

    prvred(n);
    sred(n);
    prvred(n);
    return 0;
}
