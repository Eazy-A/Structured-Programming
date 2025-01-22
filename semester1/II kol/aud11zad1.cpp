// bubble sort
#include <iostream>
using namespace std;
void swap (int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
int main() {
    int a[100];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int j = 0; j < n; j++) {
        for (int i = 0; i < n; i++) {
            if (a[i] > a[i + 1]) {
                swap(a[i], a[i + 1]);
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}
