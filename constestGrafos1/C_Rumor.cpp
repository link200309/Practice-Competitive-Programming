#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<vector<ll>> graf;
vector<bool> visited;
vector<ll> c;
ll menor;

void dfs(ll v){
    visited[v] = true;
    if(c[v] < menor) menor = c[v];

    for(ll vi : graf[v]){
        if(!visited[vi]){
            dfs(vi);
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, m; cin >> n >> m;
    graf.resize(n);
    c.resize(n);
    visited.assign(n, false);
 
    for(ll &x : c) cin >> x;

    for(ll i = 0; i < m; i++){
        ll x, y; cin >> x >> y;
        --x; --y;
        graf[x].push_back(y);
        graf[y].push_back(x);
    }

    ll total = 0; 
    for(ll i = 0; i < n; i++){
        if(!visited[i]){
            menor = c[i];
            dfs(i); 
            total += menor;
        }
    }

    cout << total << '\n';

    return 0;
}
