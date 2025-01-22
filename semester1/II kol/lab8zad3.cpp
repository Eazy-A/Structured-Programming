#include <iostream>
using namespace std;
void scale(float *scores, int *n) {
    float max = scores[0];
    float maxscore = 0;
    for (int i = 1; i < *n; i++) {
        if (scores[i] > max) {
            max = scores[i];
        }
    }
    maxscore = 100/max;
    for (int i = 0; i < *n; i++) {
        scores[i] *= maxscore;
        cout<< scores[i] << " ";
    }
}

int main() {
    float scores[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++) {
        cin>>scores[i];
    }
    scale(scores, &n);
}