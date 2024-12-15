#include <bits/stdc++.h>
using namespace std;

class comp {
public:
    // a custom comparator which sorts in decreasing order of frequency.
    bool operator () (const pair<char, int>& a, const pair<char, int> &b) {
        if(a.second != b.second)
            return a.second > b.second;

    // and if there is tie, then it will place character with lower ascii value.
        else
            return a.first < b.first;
    }

};
int main() {
	string s;
	cin >> s;
	
    // store the frequency of characters in map
    map<char, int>mp;

    for(auto i : s) {
        mp[i]++;
    }

    // now use a set with custom comparator which sorts the pair in 
    // decreasing order of frequency , if there is a tie in frequency then
    // it will place the character with lower ASCII value first.

    cout << endl;

    set<pair<char, int>, comp> st(mp.begin(), mp.end());

    cout << st.begin()->first << endl;



	return 0;
}