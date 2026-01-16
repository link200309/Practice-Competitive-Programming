#include <bits/stdc++.h>
using namespace std;

//https://codeforces.com/problemset/problem/1020/B

vector<vector<int>> g;
vector<bool> visited;

void dfs(int v){
    visited[v] = true;

    for(int vi : g[v]){
        if(!visited[vi]){
            dfs(vi);
        } else {
            cout << vi + 1 << " ";
            break;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    g.resize(n);
    visited.assign(n, false);

    for(int i = 0; i < n; i++){
        int x; cin >> x; --x;
        g[i].push_back(x);
    }

    for(int i = 0; i < n; i++){
        dfs(i);
        visited.assign(n, false);
    }


    return 0;
}
