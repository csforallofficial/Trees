#include<bits/stdc++.h>
using namespace std;
vector<int> adj[100004];

void bfs(){
    queue<pair<int,int>>q;
    q.push({1,0});
    while(!q.empty()){
        auto it = q.front();
        q.pop();
        int node = it.first;
        int par = it.second;
        cout << node << " ";
        for(auto it:adj[node]){
            if(it!=par)
                q.push({it,node});
        }
    }
}

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n-1; i++){
        int u,v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    bfs();
    return 0;
}
