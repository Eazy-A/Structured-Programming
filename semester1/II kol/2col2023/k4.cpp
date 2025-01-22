#include <iostream>
#include <string>

using namespace std;

string to_lowercase(string str) {
    string result = str;
    for(size_t i = 0; i < str.length(); i++) {
        if(result[i] >= 'A' && result[i] <= 'Z') {
            result[i] = result[i] + ('a' - 'A');
        }
    }
    return result;
}

int count_consecutive_occurrences(string text, string target) {
    text = to_lowercase(text);
    target = to_lowercase(target);

    int max_consecutive = 0;
    int current_consecutive = 0;

    for(size_t i = 0; i <= text.length() - target.length(); i++) {
        string substring = text.substr(i, target.length());
        if(substring == target) {
            if(i == 0 || text.substr(i - target.length(), target.length()) != target) {
                current_consecutive = 1;
            } else {
                current_consecutive++;
            }
            if(current_consecutive > max_consecutive) {
                max_consecutive = current_consecutive;
            }
        }
    }

    return max_consecutive;
}

int main() {
    string starting_string;
    getline(cin, starting_string);

    if(starting_string.length() > 20) {
        cout << "Error: Starting string must be 20 characters or less" << endl;
        return 1;
    }

    string n_str;
    getline(cin, n_str);
    int N = 0;
    for(char c : n_str) {
        if(c >= '0' && c <= '9') {
            N = N * 10 + (c - '0');
        }
    }

    if(N > 100) {
        cout << "Error: N must be 100 or less" << endl;
        return 1;
    }

    int counts[101] = {0};

    for(int i = 0; i < N; i++) {
        string sentence;
        getline(cin, sentence);

        if(sentence.length() > 150) {
            cout << "Error: Sentences must be 150 characters or less" << endl;
            return 1;
        }

        int count = count_consecutive_occurrences(sentence, starting_string);
        counts[count]++;
    }
    int max_occurrences = 0;
    for(int i = 0; i <= 100; i++) {
        if(counts[i] > 0) {
            max_occurrences = i;
        }
    }

    for(int i = 0; i <= max_occurrences; i++) {
        cout << i << ": " << counts[i] << endl;
    }

    return 0;
}