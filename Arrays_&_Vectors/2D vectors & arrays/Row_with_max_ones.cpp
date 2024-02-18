# include <bits/stdc++.h>
using namespace std;

// traversing full array and preparing a count variable.
int max_ones(vector <vector <int>> v) {

    int arr[2] = {-1, -1}, count = 0;

    for(int i = 0 ; i < v.size() ; i++) {
        count = 0;
        int  right_ptr = v[0].size() - 1;

        while(v[i][right_ptr]) {
            if (v[i][right_ptr] == 1) {
                count++;
                right_ptr--;
            }

            else 
                break;
        }
        if(arr[1] < count){
            arr[1] = count;
            arr[0] = i;
        }
    }

    return arr[0];
}

int max_ones_optimised(vector <vector <int> > v) {
    int ptr = 0, onesPos = -1, temp, row;
    for(int i = 0 ; i < v.size() ; i++) {

        if(i == 0) {
            for(int j = 0 ; j < v[0].size() ; j++) {
                if(v[i][j] == 1) {
                    onesPos = j;
                    row = i;
                    break;
                }
            }
        }

        else {
            while(v[i][onesPos - 1] == 1) {
                onesPos--;
                row = i;
            }
        }
    }

    return row;

}

int main() {
    int rows = 3, columns = 4;
    // cin >> rows >> columns;
    // vector <vector <int>> vect(rows, vector <int>(columns));
    vector <vector <int>> vect{
        {0,0,1,1},
        {0,1,1,1},
        {1,1,1,1}
    };

    // for (int i = 0 ; i < vect.size() ; i++) {
    //     for(int j = 0 ; j < vect[i].size() ; j++) {
    //         cin >> vect[i][j];
    //     }
    // }

    cout << endl << endl;
    for (int i = 0 ; i < vect.size() ; i++) {
        for(int j = 0 ; j < vect[i].size() ; j++) {
            cout << vect[i][j] << " ";
        }cout << endl;
    }
    cout << endl << endl;

    cout << max_ones_optimised(vect);

}