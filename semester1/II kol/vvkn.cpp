#include <iostream>
using namespace std;

int main() {
    double prvsem, vtorsem, krajna;
    char completedLab;
    int finalNote;

    cout<<"Poeni od prv kolokvium: ";
    cin>>prvsem;
    cout<<"Poeni od vtor kolokvium: ";
    cin>>vtorsem;

    if (prvsem + vtorsem > 100) {
        krajna = (prvsem * 0.45) + (vtorsem * 0.45);
        cout<<"Dali gi zavrsi site labs uspesno?? (d/n): ";
        cin>>completedLab;
        if (completedLab == 'd' || completedLab == 'D') {
            krajna += 10;
        }
        if (krajna >= 90) {
            finalNote = 10;
        } else if (krajna >= 80) {
            finalNote = 9;
        } else if (krajna >= 70) {
            finalNote = 8;
        } else if (krajna >= 60) {
            finalNote = 7;
        } else if (krajna >= 50) {
            finalNote = 6;
        } else {
            finalNote = 5;
        }
        cout<<"Krajna ocena: "<<finalNote<<endl;
        cout<<"Poeni: "<<krajna<<endl;
    } else {
        cout<<"Na ispit."<<endl;
    }
    return 0;
}
