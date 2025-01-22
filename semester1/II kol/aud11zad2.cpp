#include <iostream>
using namespace std;

int linear_search(int a[], int n, int k) {
    for (int i = 0; i < n; i++) {
        if (a[i] == k) {
            return i;
        }
    }
    return -1;
}

int binary_search(int a[], int n, int k) {
    int start = 0, end = n - 1;
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (a[mid] == k) {
            return mid;
        }
        if (a[mid] < k) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return -1;
}

int main() {
    int a[1000000];
    int n = 1000000;
    int k;

    cin >> k;
    for (int i = 0; i < n; i++) {
        a[i] = i + 1;
    }
    int linsearch = linear_search(a, n, k);
    int binarysearch = binary_search(a, n, k);

    cout << "Linear Search result index: " << linsearch << endl;
    cout << "Binary Search result index: " << binarysearch << endl;

    return 0;
}
