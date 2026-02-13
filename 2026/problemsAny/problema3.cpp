#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

void solve(){
    int N; cin >> N;
    unordered_map<string, unordered_set<int>> lineas;
    unordered_map<int, unordered_set<string>> cis;
    unordered_map<string, int> pos;

    int ind = 0;

    for(int i = 0; i < N; i++){
        string linea; cin >> linea;
        int ci; cin >> ci;

        lineas[linea].insert(ci);
        cis[ci].insert(linea);

         if(!pos.count(linea))
            pos[linea] = ind++;  
    }

    int mayor = 0;
    string lineaMayor;
    for(auto par : lineas){
        int cant = par.second.size();
        string linea = par.first;

        if(cant > mayor){
            mayor = cant;
            lineaMayor = linea;
        } else if(cant == mayor){
            if(pos[linea] < pos[lineaMayor]){
                lineaMayor = linea;
            }
        }
    }

    int cantidad = 0;
    for(auto par : cis){
        if(par.second.size() > 1) cantidad++;
    }

    cout << cis.size() << endl << lineaMayor << endl << cantidad;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int T=1;
    while(T--) solve();
    return 0; 
}
