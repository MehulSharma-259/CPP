#include <bits/stdc++.h>
using namespace std;

void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {
    
    int applesCount = 0, orangesCount = 0;
    for(int i = 0 ; i < apples.size() ; i++) {
        apples[i] += a;
        if((apples[i] >= s) and (apples[i] <= t))
            applesCount += 1;
    }
    
    for(int i = 0 ; i < oranges.size() ; i++) {
        oranges[i] += b;
        if((oranges[i] >= s) and (oranges[i] <= t))
            orangesCount += 1;
    }
    
    cout << applesCount << endl << orangesCount << endl;
}

int main() {

    int s, t, a, b, m, n;
    vector <int> apples, oranges;
    cin >> s >> t;
    cin >> a >> b;
    cin >> m >> n;

    for(int i = 0 ; i < m ; i++) {
        int element;
        cin >> element;
        apples.push_back(element);
    }

    for(int i = 0 ; i < n ; i++) {
        int element;
        cin >> element;
        oranges.push_back(element);
    }

    countApplesAndOranges(s, t, a, b, apples, oranges);

    return 0;
}