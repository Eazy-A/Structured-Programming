#include <iostream>
using namespace std;
int sum_elements(int array[], int n) {
    if (n == 0) {
        return array[n];
    }
    return array[n] + sum_elements(array , n - 1);
}
int main() {
    int array[100],n;
    cin>>n;
    for (int i = 0; i < n; i++) {
        cin>>array[i];
    }
    cout<<sum_elements(array,n-1)<<endl;
    return 0;
}