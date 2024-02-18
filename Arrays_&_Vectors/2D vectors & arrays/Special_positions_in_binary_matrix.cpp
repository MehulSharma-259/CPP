# include <bits/stdc++.h>
using namespace std;

bool check_ith_row_jth_column(vector<vector <int>>& mat, int current_row, int current_column) {
    int found = false;

    // checking in current row for 1.
    for(int j = 0 ; j < mat[current_row].size() ; j++) { 
        if((mat[current_row][j] == 1) and (j != current_column)) {
            found = true;
            cout << current_row << " " << j << endl;
            return found;
        }
    }

    // checking in current column for 1.
    for(int i = 0 ; i < mat.size() ; i++) { 
        if((mat[i][current_column] == 1) and (i != current_row)) {
            found = true;
            cout << current_row << " " << i << endl;
            return found;
        }
    }
    
    return found;
}

int numSpecial(vector<vector<int>>& mat) {
    int special_positions = 0, row = 0, column = 0, row_checker, column_checker;

    while(row < mat.size()) {


        if(row < mat[row].size())
            column = row;
        cout << endl << "p " << row << " " << column << endl;
        if(mat[row][column] == 1) {

            if(!(check_ith_row_jth_column(mat, row, column)))
                special_positions++;
            row++;
        }

        else if(mat[row][column] == 0) {
            for(int j = 0 ; j < mat[row].size() ; j++) {
                if((mat[row][j] == 1) and (j != column)) {                        
                    if(!(check_ith_row_jth_column(mat, row, j))) {
                        special_positions++;
                        break; 
                    }
                }
            }
            row++;
        }

    }
    return special_positions++;
}

int main() {
    vector <vector <int>> matrix{{1,0,0},{0,0,1},{1,0,0}};
    cout << endl << endl;
    for (int i = 0 ; i < matrix.size() ; i++) {
        for(int j = 0 ; j < matrix[i].size() ; j++) {
            cout << matrix[i][j] << " ";
        }cout << endl;
    }
    cout << endl << endl;

    cout << numSpecial(matrix) << endl;
}
// [[0,0,0,0,0,1,0,0],[0,0,0,0,1,0,0,1],[0,0,0,0,1,0,0,0],[1,0,0,0,1,0,0,0],[0,0,1,1,0,0,0,0]]