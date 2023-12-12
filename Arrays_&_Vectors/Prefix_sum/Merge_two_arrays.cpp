# include <bits/stdc++.h>
using namespace std;
void merge_array(vector <int> v1, vector <int> v2, vector <int> &m) {
    int ptr1 = 0, ptr2 = 0;

    while (ptr1 < v1.size() || ptr2 < v2.size()) {

        if(ptr1 >= v1.size()) {
            m.push_back(v2[ptr2]);
            ptr2++;
        }

        else if(ptr2 >= v2.size()) {
            m.push_back(v1[ptr1]);
            ptr1++;
        }

        else if(v1[ptr1] < v2[ptr2]) {
            m.push_back(v1[ptr1]);
            ptr1++;
        }

        else if (v1[ptr1] == v2[ptr2]) {
            m.push_back(v1[ptr1]);
            m.push_back(v1[ptr1]);
            ptr1++;
            ptr2++;
        }

        else if (v1[ptr1] > v2[ptr2]) {
            m.push_back(v2[ptr2]);
            ptr2++;
        }

    }
}

int main() {
    vector <int> v1, v2, master;
    int m, n;
    cout << "Enter the number of elements in first vector : ";
    cin >> m;
    cout << "Enter the number of elements in second vector : ";
    cin >> n;
    for(int i = 0 ; i < m ; i++) {
        int element;
        cin >> element;
        v1.push_back(element);
    }

    for(int i = 0 ; i < n ; i++) {
        int element;
        cin >> element;
        v2.push_back(element);
    }

    cout << "First vector is : ";

    for(int i = 0 ; i < m ; i++) {
        cout << v1[i] << " ";
    }cout << endl;

    cout << "Second vector is : ";

    for(int i = 0 ; i < n ; i++) {
        cout << v2[i] << " ";
    }cout << endl;

    merge_array(v1, v2, master);

    cout << "Master array is : ";
    for(int i = 0 ; i < (m+n) ; i++) {
        cout << master[i] << " ";
    }cout << endl;

    return 0;

}