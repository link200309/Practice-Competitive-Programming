#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define all(x) x.begin(), x.end()
#define DBG(x) cerr << #x << " = " << (x) << " (line " << __LINE__ << ")" << endl;
#define DBG_ARR(arr) cerr << #arr << ": "; for (auto &_x : arr) cerr << _x << " "; cerr << endl;
const ll INF = 1e18;
using namespace std;

vector<vector<int>> gr;
vector<int> dis;

bool aster = true;

void dfs(int u, int nodo){
    for(int v : gr[u]){
        if(dis[v] == -1){
            dis[v] = dis[u] + 1;
            if(dis[v] == 2){
                auto it = find(gr[nodo].begin(), gr[nodo].end(), v);
                if(it != gr[nodo].end()){
                    gr[nodo].erase(it);
                    it = find(gr[v].begin(), gr[v].end(), nodo);
                    if(it != gr[v].end()){
                        gr[v].erase(it);
                    }
                    aster = false;
                }
            } else {
                dfs(v, nodo);
            }
        }
    } 
    
}   

void solve(){
    int N, M; cin >> N >> M;
    gr.resize(N);
    dis.assign(N, -1);

    while(M--){
        int u, v; cin >> u >> v; --u; --v;
        gr[u].push_back(v);
        gr[v].push_back(u);
    }

    for(int i = 0; i < N; i++){
        dis[i] = 0;
        dfs(i, i);
        dis.assign(N, -1);
    }

    if(aster) {cout << "*" << endl; return;}

    for(int i = 0; i < N; i++){
        for(int j = 0; j < gr[i].size(); j++){
            if(gr[i][j] > i){
                cout << i+1 << " " << gr[i][j]+1 << endl;
            }
        }
    }
}
 
int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int T = 1;
    while(T--){solve();}
    return 0;
}