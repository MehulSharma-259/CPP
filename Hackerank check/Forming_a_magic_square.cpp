# include <bits/stdc++.h>
using namespace std;

int formingMagicSquare(vector<vector<int>> s) {

    vector <int> colSum(3, 0), rowSum(3, 0), digits(10, 0);
    
    int d1 = 0, d2 = 0, count = 0, diff = 0;
    
    for(int i = 0 ; i < s.size() ; i++) {
        for(int j = 0 ; j < s[0].size() ; j++) {
            digits[s[i][j]]++;
            rowSum[i] += s[i][j];
            colSum[j] += s[i][j];
            if(i == j)
                d1 += s[i][j];
            
            if(i+j == s.size() - 1)
                d2 += s[i][j];
        }
    }
    bool complete = false;

    while(!complete) {
        
        for(int i = 0 ; i < s.size() ; i++) {
            for(int j = 0 ; j < s[0].size() ; j++) {
                
                if((rowSum[i] == 15) or (colSum[j] == 15) or (i == j and d1 == 15) or ((i + j == s.size() - 1) and (d2 == 15)))
                    continue;
                
                else if((i != j) and (i + j != s.size() - 1)){
                    
                    if(rowSum[i] == colSum[j]){
                        diff = 15 - rowSum[i];
                        digits[s[i][j]]--;
                        s[i][j] += diff;
                        rowSum[i] += diff;
                        colSum[j] += diff;
                        digits[s[i][j]]++;
                    }
                    
                    else
                        continue;
                    
                }
                
                else if(i == j) {
                    
                    if(rowSum[i] == colSum[j]){
                        diff = 15 - rowSum[i];
                        digits[s[i][j]]--;
                        s[i][j] += diff;
                        rowSum[i] += diff;
                        colSum[j] += diff;
                        digits[s[i][j]]++;
                    }
                    
                    if(rowSum[i] == d1) {
                        diff = 15 - rowSum[i];
                        digits[s[i][j]]--;
                        s[i][j] += diff;
                        rowSum[i] += diff;
                        colSum[j] += diff;
                        d1 += diff;
                        digits[s[i][j]]++;
                    }
                    
                    if(colSum[j] == d1) {
                        diff = 15 - colSum[i];
                        digits[s[i][j]]--;
                        s[i][j] += diff;
                        rowSum[i] += diff;
                        colSum[j] += diff;
                        d1 += diff;
                        digits[s[i][j]]++;
                    }
                    
                    else continue;
                }
                
                else if(i + j == s.size() - 1) {
                    
                    if(rowSum[i] == colSum[j]){
                        diff = 15 - rowSum[i];
                        digits[s[i][j]]--;
                        s[i][j] += diff;
                        rowSum[i] += diff;
                        colSum[j] += diff;
                        digits[s[i][j]]++;
                    }
                    
                    if(rowSum[i] == d2) {
                        diff = 15 - rowSum[i];
                        digits[s[i][j]]--;
                        s[i][j] += diff;
                        rowSum[i] += diff;
                        colSum[j] += diff;
                        d2 += diff;
                        digits[s[i][j]]++;
                    }
                    
                    if(colSum[j] == d2) {
                        diff = 15 - colSum[i];
                        digits[s[i][j]]--;
                        s[i][j] += diff;
                        rowSum[i] += diff;
                        colSum[j] += diff;
                        d2 += diff;
                        digits[s[i][j]]++;
                    }
                    
                    else continue;
                }

                
                
            }
        }
        bool allDigits = true, allRows = true, allColumns = true;
        
        for(int i = 1 ; i < 10 ; i++) {
            if(digits[i] != 1)
                allDigits = false;
        }
        
        for(int i = 0 ; i < 3 ; i++) {
            if(rowSum[i] != 15 and colSum[i] != 15) {
                allRows = false;
                allColumns = false;
            }
        }
        
        if(allDigits and allRows and allColumns and d1 == 15 and d2 == 15)
            complete = true;

        cout << "not complete" << endl << endl;;

        for(int i = 0 ; i < s.size() ; i++) {
            for(int j = 0 ; j < s[0].size() ; j++) {
                cout << s[i][j] << " ";
            }
        cout << endl;
        }
        

        for(int i = 1 ; i < 10 ; i++) 
            cout << digits[i] << " ";
        cout << endl << endl;

        for(int i = 0 ; i < 3 ; i++) {
            cout << rowSum[i] << " ";
        }cout << endl;

        for(int i = 0 ; i < 3 ; i++) {
            cout << colSum[i] << " ";
        }cout << endl;

        cout << d1 << " " << d2 << endl;

        count++;
        if(count > 3)
            break;
        
    }
    
    
    for(int i = 0 ; i < s.size() ; i++) {
        for(int j = 0 ; j < s[0].size() ; j++) {
            cout << s[i][j] << " ";
        }
        cout << endl;
    }

    




















    // for(int i = 0 ; i < 10 ; i++)
    //     cout << digits[i] << " ";
    // cout << endl;
    
    // for(int i = 0 ; i < 3 ; i++)
    //     cout << rowSum[i] << " ";
    // cout << endl;
    
    // for(int i = 0 ; i < 3 ; i++)
    //     cout << colSum[i] << " ";
    // cout << endl;
    
    // cout << d1 << " " << d2 << endl;
        
    return 0;
}


int main() {
    vector <vector <int> > s(3, vector <int>(3, 0));
    for (int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            cin >> s[i][j];
        }
    }

    formingMagicSquare(s);
}