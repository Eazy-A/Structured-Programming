#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main() {
    char niza[101];
    int counter = 0;
    int nums[100];

    while (true) {
        cin.getline(niza, 101);
        if (niza[0] == '#') break;

        for (int i = 0; i < strlen(niza); i++) {
            if (isdigit(niza[i])) {
                nums[counter] = niza[i] - '0';
                counter++;
            }
        }
        for (int i = 0; i < counter - 1; i++) {
            for (int j = 0; j < counter - i - 1; j++) {
                if (nums[j] > nums[j + 1]) {
                    swap(nums[j], nums[j + 1]);
                }
            }
        }
        cout << counter << ":";
        for (int i = 0; i < counter; i++) {
            cout << nums[i];
        }
        cout << endl;
        counter = 0;
    }
}
