# include <bits/stdc++.h>
using namespace std;

void check_ith_row_jth_col(vector <vector <int>> &matrix, int row, int col, int &onesRow, int &onesCol, int &zeroesRow, int &zeroesCol) {

    for(int i = 0 ; i < matrix.size() ; i++) {
        if(matrix[i][col] == 1)
            onesCol++;
        else
            zeroesCol++;
    }

    for(int j = 0 ; j < matrix[row].size() ; j++) {
        if(matrix[row][j] == 1)
            onesRow++;
        else
            zeroesRow++;
    }

}

vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
    vector <vector <int>> diff(grid.size(), vector <int> (grid[0].size()));
    for(int i = 0 ; i < grid.size() ; i++) {
        for(int j = 0 ; j < grid[i].size() ; j++){
            int onesRow = 0, onesCol = 0, zeroesRow = 0, zeroesCol = 0;
            check_ith_row_jth_col(grid, i, j, onesRow, onesCol, zeroesRow, zeroesCol);
            diff[i][j] = (onesRow + onesCol - zeroesRow - zeroesCol);
        }
    }
    return diff;
}

int main() {
    vector <vector <int>> matrix{{0,1,1},{1,0,1},{0,0,1}};
    cout << endl << endl;
    for (int i = 0 ; i < matrix.size() ; i++) {
        for(int j = 0 ; j < matrix[i].size() ; j++) {
            cout << matrix[i][j] << " ";
        }cout << endl;
    }
    cout << endl << endl;

    vector <vector <int> > diff = onesMinusZeros(matrix);

    cout << endl << endl;
    for (int i = 0 ; i < diff.size() ; i++) {
        for(int j = 0 ; j < diff[i].size() ; j++) {
            cout << diff[i][j] << " ";
        }cout << endl;
    }
    cout << endl << endl;

}