#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

void solve(){
    int N; cin >> N;

    map<string, ll> rutaSum, placaSum;
    map<string, string> placaPrimRuta;
    map<string, bool> placaMultiRuta;

    ll totalRecaudado = 0;

    for(int i = 0; i < N; i++){
        string ruta, placa;
        ll monto;
        cin >> ruta >> placa >> monto;

        totalRecaudado += monto;
        rutaSum[ruta] += monto;
        placaSum[placa] += monto;

        auto it = placaPrimRuta.find(placa);
        if(it == placaPrimRuta.end()){
            placaPrimRuta[placa] = ruta;
        } else if(it->second != ruta){
            placaMultiRuta[placa] = true;
        }
    }

    string rutaMayRecaudado = "";
    ll mayorRecaudacion = -1;
    for(auto p : rutaSum){
        if(p.second > mayorRecaudacion || (p.second == mayorRecaudacion && p.first < rutaMayRecaudado)){
            mayorRecaudacion = p.second;
            rutaMayRecaudado = p.first;
        }
    }

    int autoMasRuta = 0;
    for(auto &p : placaMultiRuta){
        if(p.second) autoMasRuta++;
    }

    string placaMasDinero = "";
    ll maxDinero = -1;
    for(auto p : placaSum){
        if(p.second > maxDinero || (p.second == maxDinero && p.first < placaMasDinero)){
            maxDinero = p.second;
            placaMasDinero = p.first;
        }
    }

    cout << totalRecaudado << endl;
    cout << rutaMayRecaudado << endl;
    cout << autoMasRuta << endl;
    cout << placaMasDinero;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}
