#include <iostream>
#include <cmath>
using namespace std;

int poramnet(int a) {
    static int counter = 0;
    if (a == 0 && counter == 0) {
        return 0;
    }
    if (a == 0 && counter != 0) {
        counter = 0;
        return 0;
    }
    int ld = a % 10;
    int result;
    if (ld == 9) {
        result = 7 * pow(10, counter);
    } else {
        result = ld * pow(10, counter);
    }
    counter++;
    return poramnet(a / 10) + result;
}
void resetCounter() {
    poramnet(0);
}

void bubbleSort(int a[], int n) {
    for (int j = 0; j < n; j++) {
        for (int i = 0; i < n-j-1; i++) {
            if (a[i] > a[i + 1]) {
                swap(a[i], a[i + 1]);
            }
        }
    }
}

int main() {
    int a[100];
    int counter = 0;
    for (int i = 0; cin >> a[i]; i++) {
        counter++;
    }

    for (int i = 0; i < counter; i++) {
        if (a[i] < 10) {
            if (a[i] == 9) {
                a[i] = 7;
            }
        } else {
            a[i] = poramnet(a[i]);
        }
        resetCounter();
    }

    bubbleSort(a, counter);
    int c = 0;
    for (int i = 0; i < counter; i++) {
        cout << a[i] << " ";
        c++;
        if (c == 5) {
            break;
        }
    }

    return 0;
}
