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

void spiralPrinting(vector <vector <int>> v) {

    int top = 0, bottom = v.size() - 1, left = 0, right = v[0].size() - 1, direction = 0, i = 0, j = 0;
    while(top <= bottom and left <= right) {

        cout << v[i][j] << " ";

        if(direction == 0) {
            j++;
            if(j == right) {
                direction++;
                top++;
            }
        }

        else if(direction == 1) {
            i++;
            if(i == bottom) {
                direction++;
                right--;
            }
        }

        else if(direction == 2) {
            j--;
            if(j == left) {
                direction++;
                bottom--;
            }
        }

        else if(direction == 3) {
            i--;
            if(i == top) {
                direction = 0;
                left++;
            }
        }
    }
    cout << v[i][j] << endl;

}


int main() {

    int r, c;
    cin >> r >> c;
    vector <vector <int>> v(r, vector <int>(c));
    
    for(int i = 0 ; i < r ; i++) {
        for(int j = 0 ; j < c ; j++) {
            cin >> v[i][j];
        }
    }

    // vector <vector <int> > v{{1,2,3}, {4,5,6}, {7, 8, 9}};

    printing(v);
    spiralPrinting(v);

    return 0;
}