#include <bits/stdc++.h>
using namespace std;
class Graph{
    public:

    // adjacency list for a weighted acyclic directed graph.
    // u -> v, w
    unordered_map<int, list<pair<int, int>>> adj;

    void addEdge(int u, int v, int w) {
        adj[u].push_back({v, w});
    }

    void print() {
        for(auto i : adj) {
            cout << i.first << "-> ";
            for(auto j : i.second) 
                cout << "(" << j.first << ", " << j.second << "), ";
            cout << endl;
        }
    }
};

// finds topological sort.
void dfs(int node, unordered_map<int, list<pair<int, int>>>& adj , 
        unordered_map<int, bool> &visited, stack<int> &ans) {
    
    for(auto neighbour: adj[node]) {
        if(!visited[neighbour.first]) {
            visited[neighbour.first] = true;
            dfs(neighbour.first, adj, visited, ans);
        }
    }

    ans.push(node);
    
}

vector<int> shortestPath(Graph &g, int s) {

    // find topological sort using dfs.
    // store it in toppo.
    stack<int> toppo;
    unordered_map<int, bool> visited;
    int n = 6;
    for(int i = 0 ; i < n ; i++) {
        if(!visited[i]){
            visited[i] = true;
            dfs(i, g.adj, visited, toppo);
        }
    }



    // create a distance array with all values = INT_MAX.
    vector<int> distance(n, INT_MAX);

    int src = 1;

    // make src = 0 as we cover 0 distance to reach source.
    distance[src] = 0;

    // update the distance.
    while(!toppo.empty()) {
        // top element is now current.
        int curr = toppo.top();
        toppo.pop();

        if(distance[curr] != INT_MAX) {
            // process neighbours of curr.
            for(auto neighbour : g.adj[curr]) {
                // check currDist + travel < previous neighbour distance then update.
                // store the smaller value.
                if(distance[curr] + neighbour.second < distance[neighbour.first])
                    distance[neighbour.first] = distance[curr] + neighbour.second;
            }
        }
    }

    return distance;
}

int main() {

    Graph g;

    g.addEdge(0,1,5);
    g.addEdge(0,2,3);
    g.addEdge(1,2,2);
    g.addEdge(1,3,6);
    g.addEdge(2,3,7);
    g.addEdge(2,4,4);
    g.addEdge(2,5,2);
    g.addEdge(3,4,-1);
    g.addEdge(4,5,-2);

    g.print();

    vector<int> ans = shortestPath(g, 1);
    cout << "Answer is : " << endl;
    for(auto i : ans)
        cout << i << " ";
    cout << endl;


    return 0;
}