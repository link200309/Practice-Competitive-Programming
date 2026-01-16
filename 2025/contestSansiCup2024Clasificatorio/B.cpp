#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define DBG(x) cerr << #x << " = " << (x) << " (line " << __LINE__ << ")" << endl;
#define DBG_ARR(arr) cerr << #arr << ": "; for (auto &_x : arr) cerr << _x << " "; cerr << endl;
using namespace std;

//https://codeforces.com/group/tkvtLRSSB8/contest/570200/problem/B

vector<vector<ll>> gr;
vector<ll> f;
ll disMax = 0;
ll nodeMax;
vector<ll> dis;

void bfs(ll nodo){
    queue<ll> q;
    q.push(nodo);
    dis[nodo] = 0;

    while(!q.empty()){
        ll u = q.front(); q.pop();
        for(ll v : gr[u]){
            if(dis[v] == -1){
                dis[v] = dis[u]+1;
                if(dis[v] > disMax){
                    disMax = dis[v];
                    nodeMax = v;
                }
                q.push(v);
            }
        }
    }
}

void solve(){
    ll n; cin >> n;
    gr.resize(n);
    f.resize(n);
    dis.assign(n, -1);

    for(ll i = 0; i < n-1; i++){
        ll a, b; cin >> a >> b; --a; --b;
        gr[a].push_back(b);
        gr[b].push_back(a);

    }

    for(ll &x : f) cin >> x;

    bfs(0);

    ll nodoMov;
    ll maxJ = 0;
    ll sumJ = 0;
    for(ll i = 0; i < n; i++){
        sumJ += f[i] * (dis[i]+1);
        if(f[i]*(disMax+1)-f[i]*(dis[i]+1) > maxJ){
            maxJ = f[i]*(disMax+1)-f[i]*(dis[i]+1);
            nodoMov = i;
        }
    }

    cout << sumJ - (f[nodoMov]*(dis[nodoMov]+1)) + (f[nodoMov]*(disMax+1)) << endl;
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int T = 1;
    while(T--){solve();}
    return 0;
}
