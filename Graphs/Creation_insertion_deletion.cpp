#include <bits/stdc++.h>
using namespace std;
template <typename T>
class Graph{
    public:

    // adjacency list.
    unordered_map<T, list<T>> adj;

    void insert(T u, T v, bool direction) {
        adj[u].push_back(v);

        if(direction == 0)
            adj[v].push_back(u);
    }

    void print() {
        for(auto i : adj) {
            cout << i.first << "-> ";
            for(auto j : i.second) 
                cout << j << ", ";

            cout << endl;
        }
    }
};

int main() {
    

    int n, m;

    cout << "Enter number of nodes and edges: ";
    cin >> n >> m;

    Graph<int> g;


    // 5 6 0 1 1 2 2 3 3 1 3 4 0 4

    for(int i = 0 ; i < m ; i++) {
        int u, v;

        cin >> u >> v;

        g.insert(u, v, 0);
    }

    g.print();

    return 0;
}