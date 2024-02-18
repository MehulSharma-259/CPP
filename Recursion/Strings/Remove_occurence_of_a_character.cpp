# include <bits/stdc++.h>
using namespace std;

void removeChar(string &s, char c, int itr) {

    if(itr < s.size()) {
        if(s[itr] == c)
            s.erase(s.begin() + itr);
        removeChar(s, c, itr + 1);
    }
}

int main() {

    string s;
    char ch;
    cin >> s;
    cin >> ch;

    removeChar(s, ch, 0);
    cout << s;
    return 0;
}