#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

vector<vector<int>> gr;
vector<bool> visited;

int dfs(int n1) {
    visited[n1] = true;
    int contador = 1;

    for(int v : gr[n1]){
        if(!visited[v]){
            int aumento = dfs(v);
            if(aumento < 0) return -1; 
            contador += aumento;
        } else {
            contador = -1;
        }
    }
    return contador;
}

void solve(int t){
    int N, Q; cin >> N >> Q;
    gr.resize(N);
    visited.assign(N, false);

    while(Q--){
        char operacion; cin >> operacion;

        if(operacion == 'A'){
            int n1, n2; cin >> n1 >> n2; --n1;--n2;
            gr[n1].push_back(n2);
        } else if (operacion == 'D') {
            int n1; cin >> n1; --n1;
            int desplegados = dfs(n1);

            if(desplegados >= 0) cout << desplegados << endl;
            else cout << -1 << endl;

            visited.assign(N, false);
        } else {
            int n1, n2; cin >> n1 >> n2; --n1; --n2;
            gr[n1].erase(remove(gr[n1].begin(), gr[n1].end(), n2), gr[n1].end());
        }
    }
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t=1;
    for(int i = 1; i <= t; i++ ) solve(i);
    return 0;
}