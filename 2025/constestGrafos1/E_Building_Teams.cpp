#include <bits/stdc++.h>
#define ll long long
using namespace std;

//https://vjudge.net/problem/CSES-1668

vector<vector<ll>> gr;
vector<int> c;

bool bfs(ll u){
    queue<ll> q;
    q.push(u);
    c[u] = 1;

    while(!q.empty()){
        ll nodo = q.front(); q.pop();
        for(ll vi : gr[nodo]){
            if(c[vi] == -1) {c[vi] = 3 - c[nodo];q.push(vi);}
            else if(c[vi] == c[nodo]) return false;
        }
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, m; cin >> n >> m;
    gr.resize(n);
    c.assign(n, -1);

    for(int i = 0; i < m; i++){
        ll a, b; cin >> a >> b; --a, --b;
        gr[a].push_back(b);
        gr[b].push_back(a);
    }

    bool res = true;
    for(int i = 0; i < n; i++){
        if(c[i] == -1) res = bfs(i);
        if(!res){cout << "IMPOSSIBLE" << "\n";return 0;}
    }

    for(int &x : c){
        cout << x << " ";
    }

    return 0;
}
