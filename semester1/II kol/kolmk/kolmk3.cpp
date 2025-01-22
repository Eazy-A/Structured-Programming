#include <iostream>
using namespace std;
int sum_pos(int *a, int ind, int n) {
    int sum = 0;
    for (int i = ind; i<n; i++) {
        sum += a[i];
    }
    return sum;
}
int main() {
    int a[100], n;
    cin>>n;
    for (int i = 0; i<n; i++) {
        cin>>a[i];
    }
    int ind;
    cin>>ind;
    cout<<sum_pos(a, ind, n);
    return 0;
}