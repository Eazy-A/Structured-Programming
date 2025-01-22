#include <iostream>
using namespace std;
// should correct the code
double continuous_fraction(int array[], int n) {
    if (n == 1) return array[0];
    return array[n - 1] + 1.0 / continuous_fraction(array, n - 1);
}

int main() {
    int n, array[100];
    cin >> n;
    for (int i = 0; i < n; i++) cin >> array[i];
    double result = continuous_fraction(array, n);
    cout << result << endl;
    return 0;
}
