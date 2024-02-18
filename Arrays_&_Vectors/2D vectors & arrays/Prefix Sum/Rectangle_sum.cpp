#include <bits/stdc++.h>
using namespace std;

void printing(vector <vector <int>> v) {

    cout << endl << endl;
    for (int i = 0 ; i < v.size() ; i++) {
        for(int j = 0 ; j < v[0].size() ; j++) {
            cout << v[i][j] << " ";
        }cout << endl;
    }

    cout << endl << endl;

}

int rectangleSum(vector <vector <int> > v) {
    for(int i = 0 ; i < v.size() ; i++) {
        for(int j = 0 ; j < v[i].size() ; j++) {
            if(i == 0 and j == 0)
                continue;
            else if(i != 0 and j == 0)
                v[i][j] += v[i - 1][v[i].size() - 1];
            else
                v[i][j] += v[i][j - 1];
        }
    }

    printing(v);
}

int main() {

    int r, c;
    cin >> r >> c;
    vector <vector <int>> v(r, vector <int>(c));
    int value = 1;
    for(int i = 0 ; i < r ; i++) {
        for(int j = 0 ; j < c ; j++) {
            v[i][j] = value;
            value++;
        }
    }

    // vector <vector <int> > v{{1,2,3}, {4,5,6}, {7, 8, 9}};

    printing(v);

    rectangleSum(v);

    return 0;
}