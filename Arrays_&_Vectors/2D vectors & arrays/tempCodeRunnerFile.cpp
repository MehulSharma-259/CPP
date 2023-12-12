# include <bits/stdc++.h>
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

void resize_to_big(vector<vector <int>> &v,int rows ,int columns,int condition) {
    if(rows == columns)
        return;
    
    else if(condition) {
        for(int i = 0 ; i < rows ; i++)
            v[i].resize(rows); // resizing columns
    }

    else {
        v.resize(columns, vector<int> (columns)); // resizing rows
    }
}

void resize_to_required(vector <vector <int>> &v,int rows,int columns,int condition) {
    if(rows == columns) 
        return;

    else if (condition) {
        v.resize(columns, vector <int> (rows)); // resizing rows
    }

    else {
        for(int i = 0 ; i < rows ; i++) 
            v[i].resize(rows); // resizing columns
    }
}

int main() {

    int rows, columns, itr;
    cin >> rows >> columns;

    int condition = rows > columns;
    if(condition)
        itr = rows;
    else
        itr = columns;
    
    cout << itr << endl;

    vector <vector <int>> v(rows, vector <int> (columns));

    for (int i = 0 ; i < rows ; i++){
        for(int j = 0 ; j < columns ; j++){
            cin >> v[i][j];
        }
    }

    printing(v);

    resize_to_big(v, rows, columns, condition);
    printing(v);
    for(int i = 0 ; i < itr ; i++) {
        for(int j = 0 ; j < itr ; j++) {
            if(i != j && i > j) {
                int temp = v[i][j];
                v[i][j] = v[j][i];
                v[j][i] = temp;
            }
        }
    }
    printing(v);
    resize_to_required(v, rows, columns, condition);
    printing(v);
    return 0;
}