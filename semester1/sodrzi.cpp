#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x, n, a;
    bool found = false;
    cin >> x >> n;

    int xLength = 0, xCopy = x;

    // Calculate the number of digits in x
    while (xCopy > 0) {
        xCopy /= 10;
        xLength++;
    }

    int xDivisor = pow(10, xLength);  // The divisor to extract xLength digits

    for (int i = 0; i < n; i++) {
        cin >> a;
        int temp = a;
        bool containsX = false;

        // Check if x appears as a sequence in a
        while (temp > 0) {
            // Extract the last xLength digits of temp
            int lastDigits = temp % xDivisor;

            // If the last xLength digits equal x, set containsX to true
            if (lastDigits == x) {
                containsX = true;
                break;
            }

            // Remove the last digit from temp
            temp /= 10;
        }

        // If x is found within a, print a and mark as found
        if (containsX) {
            cout << a << endl;
            found = true;
        }
    }

    // If no numbers contained x, print "nema"
    if (!found) {
        cout << "nema" << endl;
    }

    return 0;
}
