#include <bits/stdc++.h>

using namespace std;

vector<string> generateSubstrings(const string& str) {
    int n = str.length();
    vector<string> ans;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            ans.push_back(str.substr(i, j - i + 1));
        }
    }
}

int main() {
    string input;

    cin >> input;


    vector<string> subStrings = generateSubstrings(input);

    return 0;
}
