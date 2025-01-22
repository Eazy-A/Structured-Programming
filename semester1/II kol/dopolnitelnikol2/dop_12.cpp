#include <iostream>
using namespace std;

int main() {
    int N, M;
    cin>>N>>M;
    int A[100][100];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> A[i][j];
        }
    }

    for (int i = 0; i < N; i++) {
        int count = 0;
        for (int j = 0; j < M; j++) {
            if ((A[i][j] % 2) == ((i + j) % 2)) {
                count++;
            }
        }
        cout<<i<< ": "<<count<<endl;
    }

    return 0;
}
