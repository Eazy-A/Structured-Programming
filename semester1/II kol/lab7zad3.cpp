//vnesuvas bukva od anliskata azbuka i vneses 1 ili 0, i ako e 1 od bukvata do z, ako e 0 od bukvata do a;
#include <iostream>
using namespace std;
void azbuka(char bukva, int n) {
    if (bukva == 'z' || bukva == 'Z' || bukva == 'a' || bukva == 'A') {
        cout << bukva <<" ";
        return;
    }
    if (n == 1) {
        cout << bukva <<" ";
        return azbuka(bukva + 1, n);
    }
    if (n == 0) {
        cout << bukva<<" ";
        return azbuka(bukva - 1, n);
    }
}
int main() {
    char b;
    int n;
    cin >> b >> n;
    azbuka(b, n);
}