#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

//https://codeforces.com/gym/104149/problem/F

vector<vector<int>> gr;
vector<bool> visited;

ll dfs(ll u){
    visited[u] = true;
    ll suma = 0;
    for(ll v : gr[u]){
        if(!visited[v]) suma += dfs(v) + 1;
    }   
    return suma;
}

ll totalF(ll k){
    if(k == 1) return 0;
    return (k-1) + totalF(k-1);
}

void solve(){
    ll n, m; cin >> n >> m;
    gr.resize(n);
    visited.assign(n, false);

    for(ll i = 0; i < m; i++){
        ll x, y; cin >> x >> y; --x; --y;
        gr[x].push_back(y);
        gr[y].push_back(x);
    }

    ll total_f = 0;
    for(ll i = 0; i < n; i++){
        if(!visited[i]){
            ll cant_conex = dfs(i)+1;
            total_f += totalF(cant_conex);
        }
    }

    ll newF = total_f - m;
    cout << newF << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
