#include <iostream>
#include <cstring>
using namespace std;

bool isValidPassword(const char input[], int length) {
    int letterCount = 0, digitCount = 0;

    for (int i = 0; i < length; i++) {
        if ((input[i] >= 'A' && input[i] <= 'Z') || (input[i] >= 'a' && input[i] <= 'z')) {
            letterCount++;
        }
        if (input[i] >= '0' && input[i] <= '9') {
            digitCount++;
        }
    }

    return (letterCount > 0) && (letterCount + digitCount >= 3);
}

void translateNumberToChars(const char* input) {
    char characters[100];
    int index = 0;

    // Process input two digits at a time
    int length = strlen(input);
    for (int i = 0; i < length; i += 2) {
        // Get two characters as one "number"
        int asciiValue = (input[i] - '0') * 10; // Tens place
        if (i + 1 < length) {
            asciiValue += (input[i + 1] - '0'); // Ones place
        }

        if (asciiValue >= 32 && asciiValue <= 126) { // Ensure it's a printable ASCII character.
            characters[index++] = static_cast<char>(asciiValue);
        }
    }

    if (index == 0) {
        cout << "No valid characters found." << endl;
        return;
    }

    // Reverse the array to get the correct order.
    for (int i = 0; i < index / 2; i++) {
        swap(characters[i], characters[index - i - 1]);
    }

    characters[index] = '\0'; // Null-terminate the string.

    cout << "Translated characters: " << characters << endl;

    // Find the smallest character.
    char smallestChar = characters[0];
    for (int i = 1; i < index; i++) {
        if (characters[i] < smallestChar) {
            smallestChar = characters[i];
        }
    }

    cout << "Smallest character: " << smallestChar << endl;
}

int main() {
    const int MAX_SIZE = 100;
    char input[MAX_SIZE];

    cout << "Enter the input: ";
    cin >> input;

    // Check if the input is numeric.
    bool isNumeric = true;
    for (int i = 0; input[i] != '\0'; i++) {
        if (!isdigit(input[i])) {
            isNumeric = false;
            break;
        }
    }

    if (isNumeric) {
        translateNumberToChars(input);
    } else {
        int length = 0;
        while (input[length] != '\0') length++; // Calculate the length manually.

        if (isValidPassword(input, length)) {
            cout << "\033[32mValid password\033[0m\n"; // Output in green.
        } else {
            cout << "\033[32mInvalid password\033[0m\n"; // Output in green.
        }
    }

    return 0;
}
