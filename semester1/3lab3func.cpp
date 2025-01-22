#include <iostream>
using namespace std;

int countOccurances(int number, int X) {
    int counter = 0;
    int tempX = X;
    int multiplier = 1;

    while (tempX > 0) {
        tempX = tempX / 10;
        multiplier = multiplier * 10;
    }

    while (number > 0) {
        if (number % multiplier == X) {
            counter++;
        }
        number = number / 10;
    }
    return counter;
}

int main() {
    int X, numbers;
    cin >> X;
    while (cin >> numbers) {
        int occurances = countOccurances(numbers, X);
        cout << occurances << endl;
    }

    return 0;
}