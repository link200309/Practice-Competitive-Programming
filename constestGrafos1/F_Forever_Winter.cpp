#include <bits/stdc++.h>
using namespace std;

//https://codeforces.com/problemset/problem/1829/F

bool bfs(vector<vector<int>> &g, int u){
    vector<int> dis(g.size(), -1);
    queue<int> q;
    dis[u] = 0;
    q.push(u);

    while(!q.empty()){
        int node = q.front(); q.pop();
        for(int v : g[node]){
            if(dis[v] == -1){
                dis[v] = dis[node] + 1;
                if(dis[v] > 2) return false;
                q.push(v);
            }
        }
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;

    while(t--){
        int n, m; cin >> n >> m;
        vector<vector<int>> g(n);

        for(int i = 0; i < m; i++){
            int u, v; cin >> u >> v; --u; --v;
            g[u].push_back(v);
            g[v].push_back(u);
        }

        int centro;
        for(int i = 0; i < n; i++){
            bool res = bfs(g, i);
            if(res){centro = i; break;}
        }

        int x = g[centro].size(), yAux= g[centro][0];

        int y = g[yAux].size() - 1;

        cout << x << " " << y << "\n";
        
    }

    return 0;
}
