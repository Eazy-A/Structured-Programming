#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int digit, decimalValue = 0, position = 0;
    while (cin >> digit) {
        if (digit != 0 && digit != 1) {
            cout << "Invalid input." << endl;
            return 1;
        }
        decimalValue += digit * pow(2, position);
        position++;
    }
    cout << "Decimal value: " << decimalValue << endl;
    return 0;
}
