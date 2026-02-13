#include <bits/stdc++.h>
using namespace std;
#define ll long long

vector<vector<int>> gr;
vector<ll> cant;
vector<ll> top;


void bfs(int v) {
    queue<int> ql;
    ql.push(v);
    top[v] = cant[v];

    while(!ql.empty()){
        int nodo = ql.front(); ql.pop();
        for(int &u : gr[nodo]){
            top[u] = cant[u];
            ql.push(u);
        }
    }
}

void solve(){
    int n; cin >> n;
    gr.resize(n);
    cant.resize(n);
    top.assign(max(n, 5), -1);
    
    for(int i = 0; i < n-1; i++){
        int a, b; cin >> a >> b; --a; --b;
        gr[a].push_back(b);
    }

    int q; cin >> q;

    while(q--){
        int t, v; cin >> t >> v; --v;
        
        if(t == 1) {int x; cin >> x; cant[v]+=x;}
        else {
            bfs(v);
            sort(top.rbegin(), top.rend());
            
            ll last = 0;
            for(int i = 0; i < 5; i++){
                if(top[i] == -1) cout << last << " ";
                else {cout << top[i] << " "; last=top[i];}
            }
            cout << endl;
            top.assign(max(n, 5), -1);
        }

    }
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int T = 1;
    while(T--) solve();
    return 0; 
}


