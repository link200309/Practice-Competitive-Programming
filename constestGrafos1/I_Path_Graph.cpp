#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

//

vector<vector<ll>> gr;
vector<bool> visited;

bool bfs(ll u, ll last){
    queue<ll> q;
    q.push(u);
    visited[u] = true;

    while(!q.empty()){
        ll nodo = q.front(); q.pop();

        if(nodo != u && nodo != last && gr[nodo].size() != 2)   return false;

        for(ll v : gr[nodo]){
            if(!visited[v]){
                q.push(v);
                visited[v] = true;
            }
        }
    }
    return true;
}

void solve(){
    ll N ,M; cin >> N >> M;
    gr.resize(N);
    visited.assign(N, false);
    
    if(M != N-1) {cout << "No"; return;} 

    while(M--){
        ll u, v; cin >> u >> v; --u; --v;
        gr[u].push_back(v);
        gr[v].push_back(u);
    }

    if(gr[0].size() != 1){
        cout << "No"; return;
    }

    bool res = bfs(0, N-1);

    if(res) cout << "Yes";
    else cout << "No";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
