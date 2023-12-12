# include <bits/stdc++.h>
using namespace std;


int main() {

// Declaring a 2d vector.
    // vector <vector <int>> vect;

// Declaring with size 3X4
    // vector <vector <int>> v(3, vector <int> (4));

// Declaring with initialization
    vector <vector <int>> v(3, vector <int> (4, 5));

    for (int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 4 ; j++){
            cout << v[i][j] << " " ;
        }cout << endl;
    }
    return 0;
}