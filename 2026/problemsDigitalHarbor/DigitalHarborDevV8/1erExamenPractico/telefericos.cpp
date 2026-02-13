#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

void solve(){
    int N; cin >> N;
    unordered_map<int, unordered_set<string>> pasajeros;
    unordered_map<string, unordered_set<int>> lineas;
    unordered_map<string, int> pos;

    for(int i = 0; i < N; i++){
        string linea; cin >> linea;
        int ci; cin >> ci;

        lineas[linea].insert(ci);
        pasajeros[ci].insert(linea);

        if(!pos.count(linea)) pos[linea] = i;
    }

    string lineaMayor;
    int maxPasajeros = 0;
    for(auto par : lineas){
        int total = par.second.size();
        if(total > maxPasajeros){
            maxPasajeros = total;
            lineaMayor = par.first;
        } else if(total == maxPasajeros){
            if(pos[par.first] < pos[lineaMayor]) {
                lineaMayor = par.first;
            } 
        }
    }

    int cantidad = 0;
    for(auto par : pasajeros){
        if(par.second.size() > 1)cantidad++;
    }

    cout << pasajeros.size() << endl;
    cout << lineaMayor << endl;
    cout << cantidad << endl;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int T = 1;
    while(T--) solve();
    return 0; 
}
