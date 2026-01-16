#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

//https://codeforces.com/contest/1037/problem/D

vector<vector<int>> gr;
vector<int> c;
vector<int> pos;

bool cmp(int a, int b){
    return pos[a] < pos[b];
}

bool matchingSecuenceBFS(int u){
    vector<bool> visited(gr.size(), false);
    vector<int> rec;
    queue<int> q;
    
    q.push(u);
    visited[u] = true;
    if(c[0] != u) return false;
    
    while(!q.empty()){
        int nodo = q.front(); q.pop();
        rec.push_back(nodo);
        sort(gr[nodo].begin(), gr[nodo].end(), cmp);

        for(int v : gr[nodo]){
            if(!visited[v]) {q.push(v); visited[v] = true;}
        }
    }
    
    if(rec.size() != c.size()) return false;
    
    for(int i = 0; i < rec.size(); i++) 
        if(rec[i] != c[i]) return false;
    
    return true;
}

void solve(){
    int n; cin >> n;
    gr.resize(n);
    c.resize(n);
    pos.resize(n);

    for(int i = 0; i < n - 1; i++ ){
        int x, y; cin >> x >> y; --x; --y;
        gr[x].push_back(y);
        gr[y].push_back(x);
    }
    for(int i = 0; i < n; i++) {
        cin >> c[i]; c[i]--;
        pos[c[i]] = i;
    }

    bool res = matchingSecuenceBFS(0);

    if(res) cout << "Yes" << endl;
    else cout << "No" << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
