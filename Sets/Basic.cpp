#include <bits/stdc++.h>
using namespace std;

int main() {
    // set<int> mySet = {10, 5, 20, 15};

    // // Insertion
    // mySet.insert(25);

    // // Access front and rear elements
    // cout << "Front element: " << *mySet.begin() << endl;
    // cout << "Rear element: " << *prev(mySet.end()) << endl;
    
    

    // // cout << "Front element: " << *mySet.begin() << endl;
    // // cout << "Rear element: " << *mySet.end() << endl;



    // for(auto i : mySet)
    //     cout << i << " ";
    // cout << endl;

    // // Search operations
    // if(mySet.count(10)) {
    //     cout << "10 is in the set." << endl;
    // }

    // // Bounds
    // auto lower = mySet.lower_bound(15);
    // if(lower != mySet.end())
    //     cout << "Lower bound for 15: " << *lower << endl;

    // auto upper = mySet.upper_bound(15);
    // if(upper != mySet.end())
    //     cout << "Upper bound for 15: " << *upper << endl;

    // // wrong gives segmentation fault but vs code does not gives it.
    // mySet.erase(mySet.end());


    set<vector<int>> st;
    st.insert({1, 2, 2});
    st.insert({1, 2, 2});
    st.insert({1, 2, 2});
    st.insert({5});
    for(auto i : st) {
        for(auto j : i) 
            cout << j << " ";
        cout << endl;
    }


    return 0;
}
