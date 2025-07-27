#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
const ll INF = 4e18;
typedef pair<int, int> pii;

//https://vjudge.net/problem/CSES-1673

struct Edge{
    int from, to, weight;
};

bool bellmanFord(vector<Edge> &gr, vector<ll> &dis, int u, int n){
    dis[u] = 0;

    for(int i = 0; i < n-1; i++){
        for(const Edge &edge : gr ){
            if(dis[edge.from] != -INF && dis[edge.from] + edge.weight > dis[edge.to]){
                dis[edge.to] = dis[edge.from] + edge.weight; 
            }
        }
    }

    vector<bool> infVert(n, false);
    for(int i = 0; i < n; i++){
        for(const Edge &edge : gr){
          if(dis[edge.from] != -INF && dis[edge.from] + edge.weight > dis[edge.to]){
                dis[edge.to] = dis[edge.from] + edge.weight;
                infVert[edge.to] = true;
            }

            if(infVert[edge.from]){
                infVert[edge.to] = true;
            }
        }
    }
    
    return !infVert[n-1];
}


void solve(){
    int n, m; cin >> n >> m;
    vector<Edge> gr(m);
    vector<ll> dis(n, -INF);

    for(int i = 0; i < m; i++){
        int a, b, x; cin >> a >> b >> x; --a; --b;
        gr[i] = {a, b, x};
    }

    bool res = bellmanFord(gr, dis, 0, n);

    if(!res){
        cout << -1 << endl;
    } else {
        cout << dis[n-1] << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T = 1;
    while(T--){solve();}
    return 0;
}
