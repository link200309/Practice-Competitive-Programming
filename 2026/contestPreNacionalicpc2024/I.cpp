#include <bits/stdc++.h>
#define ll long long
#define endl '\n'

const ll MOD = 1e9+7;

using namespace std;

vector<bool> visited;
vector<vector<int>> gr;


int dfs(int nodo){
    ll total = 1;
    visited[nodo] = true;
    
    for(int v : gr[nodo]){
        if(!visited[v]){
            total += dfs(v);
        }
    }
    return total;
}

void solve(){
    int n, m; cin >> n >> m;
    gr.resize(n);
    visited.assign(n, false);

    while(m--){
        int a, b; cin >> a >> b; --a; --b;
        gr[a].push_back(b);
        gr[b].push_back(a);
    }

    ll res = 1;
    for(int i = 0; i < n; i++){
        if(!visited[i]) res = (res * dfs(i)) % MOD;
    }

    cout << (res%MOD) << endl;
}

int main(){
    int T = 1;
    while(T--) {solve();}
    return 0;
}
