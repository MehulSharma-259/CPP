# include <bits/stdc++.h>
using namespace std;

void sum_in_range(vector <int> v, int queries) {

    int l, r;

    for(int i = 1 ; i < v.size() ; i++) {
        v[i] += v[i - 1];
    }

    while(queries--) {
        cout << "Enter l and r : ";
        cin >> l >> r;

        if(r > v.size() || l < 1){
            cout << "Index out of range!!" << endl;
            continue;
        }
        // Decrementing to make the original indexing.
        l--;
        r--;

        if(l == 0)
            cout << "Sum is : " << v[r] << endl;

        else
            cout << "Sum is : " << (v[r] -  v[l - 1]) << endl;  
    }

  
}

int main() {
    vector <int> v;
    int n, queries;
    cout << "Enter the number of elements: ";
    cin >> n;
    for(int i = 0 ; i < n ; i++) {
        int element;
        cin >> element;
        v.push_back(element);
    }

    cout << "Array is : ";

    for(int i = 0 ; i < n ; i++) {
        cout << v[i] << " ";
    }cout << endl;

    cout << "Enter the number of queries: ";
    cin >> queries;

    sum_in_range(v, queries);

    return 0;

}