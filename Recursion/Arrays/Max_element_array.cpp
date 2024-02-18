# include <bits/stdc++.h>
using namespace std;
// n = size of vector.
// time complexity = O(n).
// space complexity = O(n).


// using iterative approach in recursion.
int maxElement(vector <int> &v, int itr, int max) {
    
    if(itr < v.size()) {
        if(v[itr] > max)
            max = v[itr];
        maxElement(v, itr + 1, max);
    }
    
    else return max;
}

// actual recursive approach.
int maximum(vector <int> &v, int itr) {

    if(itr == v.size() - 1)
        return v[itr];

    return max(v[itr], maximum(v, itr + 1));
}

int main() {
    int size;
    cin >> size;
    vector <int> vect(size);

    for(int i = 0 ; i < size ; i++) {
        cin >> vect[i];
    }

    cout << maximum(vect, 1) << endl;

}