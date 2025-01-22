#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    char matrix[50][50];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    string word;
    cin >> word;
    int wordLength = 0;
    while (word[wordLength] != '\0') {
        wordLength++;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j + wordLength <= n) {
                bool found = true;
                for (int k = 0; k < wordLength; k++) {
                    if (matrix[i][j + k] != word[k]) {
                        found = false;
                        break;
                    }
                }
                if (found) {
                    cout << i << ", " << j << " -> " << i << ", " << j + wordLength - 1 << endl;
                    return 0;
                }
            }

            if (j - wordLength >= -1) {
                bool found = true;
                for (int k = 0; k < wordLength; k++) {
                    if (matrix[i][j - k] != word[k]) {
                        found = false;
                        break;
                    }
                }
                if (found) {
                    cout << i << ", " << j << " -> " << i << ", " << j - wordLength + 1 << endl;
                    return 0;
                }
            }

            if (i + wordLength <= n) {
                bool found = true;
                for (int k = 0; k < wordLength; k++) {
                    if (matrix[i + k][j] != word[k]) {
                        found = false;
                        break;
                    }
                }
                if (found) {
                    cout << i << ", " << j << " -> " << i + wordLength - 1 << ", " << j << endl;
                    return 0;
                }
            }

            if (i - wordLength >= -1) {
                bool found = true;
                for (int k = 0; k < wordLength; k++) {
                    if (matrix[i - k][j] != word[k]) {
                        found = false;
                        break;
                    }
                }
                if (found) {
                    cout << i << ", " << j << " -> " << i - wordLength + 1 << ", " << j << endl;
                    return 0;
                }
            }
        }
    }

    cout << "Not Found" << endl;
    return 0;
}
