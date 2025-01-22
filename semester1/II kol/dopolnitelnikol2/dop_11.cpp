#include <iostream>
using namespace std;

void transformArray(int arr[], int N) {
    int shift = arr[0];
    int result[100] = {0};

    if (shift > 0) {
        for (int i = N - 1; i >= 0; i--) {
            if (i - shift >= 0) {
                result[i] = arr[i - shift];
            }
        }
    } else if (shift < 0) {
        shift = -shift;
        for (int i = 0; i < N; i++) {
            if (i + shift < N) {
                result[i] = arr[i + shift];
            }
        }
    }

    for (int i = 0; i < N; i++) {
        arr[i] = result[i];
    }
}

int main() {
    int M, emptyCount = 0;
    cin>>M;

    for (int i = 0; i < M; i++) {
        int N;
        cin>>N;
        int arr[100];

        for (int j = 0; j < N; j++) {
            cin>>arr[j];
        }

        transformArray(arr, N);

        bool isEmpty = true;
        for (int j = 0; j < N; j++) {
            if (arr[j] != 0) {
                isEmpty = false;
            }
            cout<<arr[j]<<" ";
        }
        cout<<endl;

        if (isEmpty) {
            emptyCount++;
        }
    }

    cout<<emptyCount<<endl;

    return 0;
}
