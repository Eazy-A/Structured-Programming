#include<iostream>
using namespace std;
int main() {
    int a;
    cin >> a;
    int i = 0;
    while (i < 10 && a > 0) {
        int temp = a;
        int palendrom = 0, suma = 0;
        while (temp > 0) {
            palendrom = palendrom * 10 + (temp % 10);
            suma = suma + temp % 10;
            temp = temp / 10;
        }
        if (palendrom == a && palendrom % suma == 0) {
            cout <<a<<" ";
            i++;
        }
        a--;
    }
    return 0;
}