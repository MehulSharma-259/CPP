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

vector <vector <int>> rotate_with_space(vector <vector <int>> v) {

    vector <vector <int>> n(v.size(), vector <int> (v.size()));
    int k = v.size() - 1;
    for(int i = 0 ; i < v.size() ; i++) {
        for(int j = 0 ; j < v.size() ; j++) {
            n[j][k] = v[i][j];
        }
        k--;
    }

    return n;

}

void rotate_without_space(vector <vector <int>> &v) {

    for(int i = 0 ; i < v.size() ; i++) {
        for(int j = 0 ; j < i ; j++) {
                swap(v[i][j], v[j][i]);
        }
    }


    for(int i = 0 ; i < (v.size() / 2) ; i++) {
        for(int j = 0 ; j < v.size() ; j++) {
                swap(v[j][i], v[j][v.size() - 1 - i]);
        }
    }

}

int main() {

    int r;
    cin >> r;
    vector <vector <int>> matrix(r, vector <int>(r));

    for(int i = 0 ; i < r ; i++) {
        for(int j = 0 ; j < r ; j++) {
            cin >> matrix[i][j];
        }
    }

    printing(matrix);

    vector <vector <int> > rotated = rotate_with_space(matrix);

    printing(rotated);

    rotate_without_space(matrix);

    printing(matrix);

    return 0;
}