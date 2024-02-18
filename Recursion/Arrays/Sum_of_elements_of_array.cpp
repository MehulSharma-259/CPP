# include <bits/stdc++.h>
using namespace std;
// n = size of vector.
// time complexity = O(n).
// space complexity = O(n).


// actual recursive approach.
int sum(vector <int> &v, int itr) {

    if(itr == v.size() - 1)
        return v[itr];

    return v[itr] + sum(v, itr + 1);
}

int main() {
    int size;
    cin >> size;
    vector <int> vect(size);

    for(int i = 0 ; i < size ; i++) {
        cin >> vect[i];
    }

    cout << sum(vect, 0) << endl;

}