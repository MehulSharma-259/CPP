//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

    bool condition(vector<vector<int> >& mat, vector<vector<int> >& visited,  
                    int n, int row, int col) {
        if(0 <= row and row < n and 0 <= col and col < n and 
                mat[row][col] == 1 and visited[row][col] != 1)
            return true;
            
        else 
            return false;
    }
    
    void solve(vector<vector<int> > &mat, vector<vector<int> >& visited,
                    int row, int col, 
                    string path, vector<string>& ans, int n) {

        if(row == n -1 and col == n -1) {
            ans.push_back(path);
            // cout << path << endl;
            return;
        }
        
        
            
            // cout << row << " " << col << endl;
            // down 
            if(condition(mat, visited, n, row + 1, col)) {
                path += "D";
                visited[row + 1][col] = 1;
                solve(mat, visited, row + 1, col, path, ans, n);
                visited[row + 1][col] = 0;
                path.pop_back();
            }
            
            // left 
            if(condition(mat, visited, n, row, col - 1)) {
                path += "L";
                visited[row][col - 1] = 1;
                solve(mat, visited, row, col - 1, path, ans, n);
                visited[row][col - 1] = 0;
                path.pop_back();
            }
            
            // right 
            if(condition(mat, visited, n, row, col + 1)) {
                path += "R";
                visited[row][col + 1] = 1;
                solve(mat, visited, row, col + 1, path, ans, n);
                visited[row][col + 1] = 0;
                path.pop_back();
            }
            
            // up 
            if(condition(mat, visited, n, row - 1, col)) {
                path += "U";
                visited[row - 1][col] = 1;
                solve(mat, visited, row - 1, col, path, ans, n);
                visited[row - 1][col] = 0;
                path.pop_back();
            }

            // cout << "wapasi " << row << " " << col << endl;
        
    }
    
    vector<string> findPath(vector<vector<int>> &mat) {
        vector<string> ans;
        int n = mat.size();
        vector<vector<int>> visited(n, vector<int>(n, 0));
        visited[0][0] = 1;
        string path;
        
        int row = 0, col = 0;
        
        solve(mat, visited, row, col, path, ans, n);
        return ans;
    }

// 1 4 1 0 0 0 1 1 0 1 1 1 0 0 0 1 1 1



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> m(n, vector<int>(n, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        
        vector<string> result = findPath(m);
        sort(result.begin(), result.end());
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++)
                cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends