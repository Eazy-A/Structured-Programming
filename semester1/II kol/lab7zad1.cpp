// Rekurzivna funkcija so ke dade suma id sute parni broevi pomali ili ednakvi on N
#include <iostream>
using namespace std;
int sum_par(int n) {
    if (n == 0) return 0;
    if (n%2 !=0) {
        n--;
    }
        return n + sum_par(n - 2);
}
int main() {
    int n;
    cin >> n;
    int sum = sum_par(n);
    cout << sum << endl;
}