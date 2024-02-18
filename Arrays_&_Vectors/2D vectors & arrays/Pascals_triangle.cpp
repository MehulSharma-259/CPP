# include <bits/stdc++.h>
using namespace std;

void inserting_elements(vector <vector <int>> &v, int rows) {
    for(int i = 0 ; i < rows ; i++) {

        v[i].resize(i + 1);

        for(int j = 0 ; j <= i ; j++) {

            if(j == 0 or j == i)
                v[i][j] = 1;

            else
                v[i][j] = v[i - 1][j - 1] + v[i - 1][j];
        }
    }
}

void printing_elements(vector <vector <int>> v, int rows) {
    for(int i = 0 ; i < rows ; i++) {
        for(int j = 0 ; j <= i ; j++) {
            cout << v[i][j] << " ";
        }cout << endl;
    }
}

int main() {

    int rows;
    cin >> rows;
    vector <vector <int>> pascal(rows);

    inserting_elements(pascal, rows);
    printing_elements(pascal, rows);
    return 0;
}