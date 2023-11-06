#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> calculate_prefix_function(const string& s) {
    int n = s.size();
    vector<int> prefix_function(n);
    for (int i = 1; i < n; i++) {
        int j = prefix_function[i - 1];
        while (j > 0 && s[i] != s[j]) {
            j = prefix_function[j - 1];
        }
        if (s[i] == s[j]) {
            j++;
        }
        prefix_function[i] = j;
    }
    return prefix_function;
}

int main() {
    string S;
    cin >> S;

    vector<int> prefix_function = calculate_prefix_function(S);
    int n = S.size();
    int min_length = n - prefix_function[n - 1];

    cout << min_length << endl;

    return 0;
}
