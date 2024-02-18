# include <bits/stdc++.h>
using namespace std;
// n = size of vector.
// time complexity = O(n).
// space complexity = O(n).

void printing(vector <int> &v, int itr) {
    if(itr < v.size()){
        cout << v[itr] << " ";
        printing(v, itr + 1);
    }
    
    else cout << endl;
}

int main()
{
    int sum, size;
    cin >> size;
    vector <int> vect(size);

    for(int i = 0 ; i < size ; i++) {
        cin >> vect[i];
    }

    printing(vect, 0);

}