#include <bits/stdc++.h>

using namespace std;

vector<int> circuitOutput(string gate, vector<int>& a, vector<int>& b) {
    int n = a.size();
    vector<int>ans(n, 0);

    for(int i = 1 ; i < n ; i++) {
        if(gate.compare("AND")) {
            ans[i] = a[i] & b[i];
        }
        else if(gate.compare("OR")) {
            ans[i] = a[i] | b[i];
        }
        else if(gate.compare("NAND")) {
            ans[i] = !(a[i] & b[i]);
        }
        else if(gate.compare("NOR")) {
            ans[i] = !(a[i] | b[i]);
        }
        else if(gate.compare("XOR")) {
            ans[i] = ((!a[i] )& b[i]) | (a[i] & (!b[i]));
        }
    }
}

int main() {
    string input;

    cin >> input;


    vector<string> subStrings;

    return 0;
}
