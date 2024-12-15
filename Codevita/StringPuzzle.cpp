#include <bits/stdc++.h>
using namespace std;

void makeSet(vector<int> &parent, vector<int> &rank)
{
    for (int i = 0; i < parent.size(); i++)
    {
        parent[i] = i;
        rank[i] = 1;
    }
}


void unionByRank(int u, int v, vector<int> &parent, vector<int> &rank)
{

    parent[v] = u;
    rank[u] += rank[v];

}


void minimumSpanningTree(vector<vector<int>> &edges, int n)
{
    vector<int> parent(n), rank(n);
    makeSet(parent, rank);
    int ans = 0;


    for (auto i : edges)
    {
        int u = i[0];
        int v = i[1];

        // if they are in same component then join them otherwise ignore.
        unionByRank(u, v, parent, rank);
    }

    cout << "Parent array: " << endl;
    for(auto i : parent) 
        cout << i << " ";

    cout << endl;

    cout << "Rank array: " << endl;

    for(auto i : rank) 
        cout << i << " ";
    // return ans;
}

int main() {

    vector<vector<string>> e;
    int edges = 0;
    cin >> edges;

    for(int i = 0 ; i < edges ; i++) {
        vector<string> temp(2);
        cin >> temp[0] >> temp[1];
        e.push_back(temp);
    }

    string query;
    cin >> query;

    unordered_map<string, int>mp;
    int count = 0;

    cout << endl;
    for(auto i : e) {

        string a = i[0], b = i[1];
        if(mp[a] == 0){
            mp[a] = count;
            count++;
        }

        if(mp[b] == 0) {
            mp[b] = count;
            count++;
        }

    }

    for(auto i : mp)
        cout << i.first << "-> " << i.second << endl;

    int n = mp.size();

    vector<vector<int>> edg;

    for(auto i : e) {
        int a = mp[i[0]];
        int b = mp[i[1]];
        edg.push_back({a, b});
    }

    minimumSpanningTree(edg, n);


    return 0;
}


// 9
// abcd wxyz
// vsmoh bhwbb
// crpyc ynkna
// bhwbb uhhjm
// crpyc eokuo
// ynkna abcd
// bhwbb uvjyu
// vsmoh crpyc
// bhwbb enzwb
// uhhjm wxyz vsmoh crpyc bhwbb