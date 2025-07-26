#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

vector<bool> visited; 
vector<vector<int>> ve;
vector<int> subor;


void bfs(int u){
    queue<int> q;
    q.push(u);
    visited[u] = true;

    while(!q.empty()){
        int nodo = q.front(); q.pop();
        for(int v : ve[nodo]){
            if(!visited[v]){
                visited[v] = true;
                q.push(v);
            }
        }
    }
}

int isConex(int a, int b){
    return subor[a] == 0? a : subor[b] == 0? b : -1;
}

void solve(){
    int N; cin >> N;
    ve.resize(N);
    visited.assign(N, false);
    subor.assign(N, 0);

    for(int i = 0; i < N-1; i++ ){
        int p ,e; cin >> p >> e; --p; --e;
        ve[p].push_back(e);
        subor[e]++;
    }

    int cantConex = 0;
    for(int i = 0; i < N; i++){
        if(!visited[i]){
            bfs(i);
            cantConex++;
        }
    }

    int Q; cin >> Q;
    while(Q--){
        int a, b; cin >> a >> b; --a; --b;
        int conex = isConex(a, b);
        
        auto it = find(ve[a].begin(), ve[a].end(), b);
        if (it != ve[a].end()){
            ve[a].erase(it);
            ve[b].push_back(a);
            subor[b]--;
            subor[a]++;
        } else {
            it = find(ve[b].begin(), ve[b].end(), a);
            ve[b].erase(it);
            ve[a].push_back(b);
            subor[a]--;
            subor[b]++;
        }
        
        if(conex != -1) cantConex--;
        else cantConex++;

        if(cantConex == 1) cout << "DA" << endl;
        else cout << "NE" << endl;
    }
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int T = 1;
    while(T--){solve();}
    return 0;
}
