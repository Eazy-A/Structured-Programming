#include <iostream>
#include <bits/shared_ptr_base.h>
using namespace std;
int max_element(int array[], int n) {
    if (n == 0) return array[n];
    if (array[n - 1] > array[n]) {
        return array[n - 1];
    }
    return max_element(array, n - 1);
}
int main() {
    int array[100],n;
    cin>>n;
    for (int i = 0; i < n; i++) {
        cin>>array[i];
    }
    cout<<max_element(array,n)<<endl;
}