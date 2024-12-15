#include <bits/stdc++.h>

using namespace std;


int main() {
    int n, m, k;

    cin >> n >> m;
    vector<pair<int, int>>edges(n);

    for(int i = 0 ; i < m ; i++) {
        int a, b;
        cin >> a >> b;
        edges.push_back({a, b});
    }
    cin >> k;

// 4 5
// 0 1
// 0 3
// 1 3
// 1 2
// 2 3

    vector<int> friends[n];
    for(int i = 0 ; i < m ; i++) {
        int a = edges[i].first;
        int b = edges[i].second;
        friends[a].push_back(b);
        friends[b].push_back(a);
    }

    vector<pair<int, bool>> count;
    for(int i = 0 ; i < n ; i++)
        count.push_back({0, false});

    int day = 0, r = 0;

    // for day 1 all go to office.
    for(int i = 0 ; i < n ; i++) {
        count[i].second = true;

        for(int emp = 0 ; emp < n ; emp++) {
            for(auto f : friends[emp]) {
                if(f == i)
                    count[emp].first++;
            }
        }
    }

    day++;
    r += n;

    while(r < k) {

        cout << "day " << day << endl;
        for(int i = 0 ; i < n ; i++) {
            if(count[i].first == 3 and count[i].second == true){
                count[i].second = true;
                cout << i << " ";
                r++;
            }
            
            else
                count[i].second = false;

            if(count[i].first < 3 and count[i].second == false){
                count[i].second = true;
                cout << i << " ";
                r++;
            }
            
            else
                count[i].second = false;

            count[i].first = 0;
            cout << endl;
        }

        for(int i = 0 ; i < n ; i++) {

            if(count[i].second == true) {
                for(int emp = 0 ; emp < n ; emp++) {
                    for(auto f : friends[emp]) {
                        if(f == i)
                            count[emp].first++;
                    }
                }
            }
        }

        day++;

    }

    cout << day << endl;

// 5 7
// 1 4
// 0 4
// 0 1
// 3 2
// 3 4
// 2 0
// 1 3
// 15

    return 0;
}
