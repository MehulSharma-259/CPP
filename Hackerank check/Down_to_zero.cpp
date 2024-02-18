# include <bits/stdc++.h>
using namespace std;

int downToZero(int n) {
    int temp1 = n, temp2 = n, result = 0;
    vector <int> factors;
    while(n != 0) {
        
        for(int a = 2 ; a <= n / 2 ; a++) {
            if(temp1 % a == 0) {
                int b = temp1 / a;
                temp1 = max(a, b);
            }
        }
        
        temp2 = n - 1;
        
        if(temp1 < temp2) {
            n = temp1;
            result++;
        }
        
        else {
            // temp2 = n;
            n = temp2;
            temp1 = n;
            result++;
        }
        
        cout << n << endl;
        
    }
    return result;
}

int main() {

    int queries, n, i = 0;
    cin >> queries;
    vector <int> answers(queries);

    while(queries) {

        cin >> n;
        // cout << downToZero(n) << " " ;
        answers[i] = downToZero(n);
        queries--;
        i++;
    }

    for(int i = 0 ; i < answers.size() ; i++) 
        cout << answers[i] << " ";
    cout << endl;
    return 0;
}