#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

void solve(){
    int N; cin >> N;
    ll dineroRecaudado = 0;
    unordered_map<string, ll> rutaRecaudacion;
    unordered_map<string, unordered_set<string>> vehiculosRutas;
    unordered_map<string, ll> vehiculoPagado;

    //En caso de que el orden sea relevante en caso de empte
    unordered_map<string, int> rutaPosicion;
    unordered_map<string, int> placaPosicion;
    
    for(int i = 0; i < N; i++){
        string ruta, placa; cin >> ruta >> placa;
        int monto; cin >> monto;

        dineroRecaudado += monto;
        rutaRecaudacion[ruta] += monto;
        vehiculosRutas[placa].insert(ruta);
        vehiculoPagado[placa] += monto;
        
        if(!rutaPosicion.count(ruta)){
            rutaPosicion[ruta] = i;
        }
        
        if(!placaPosicion.count(placa)){
            placaPosicion[placa] = i;
        }


    }

    ll masRecaudado = 0;
    string rutaMasRecaudado;
    for(auto par : rutaRecaudacion){
        if(par.second > masRecaudado){
            masRecaudado = par.second;
            rutaMasRecaudado = par.first;
        } else if (par.second == masRecaudado){
            if(rutaPosicion[par.first] < rutaPosicion[rutaMasRecaudado]){
                masRecaudado = par.second;
                rutaMasRecaudado = par.first;
            }
        }
    }

    ll masUnaRutas = 0;
    for(auto par : vehiculosRutas){
        if(par.second.size() > 1) masUnaRutas++;
    }

    ll masPago = 0;
    string placaMasPago;
    for(auto par : vehiculoPagado){
        if(par.second > masPago){
            masPago = par.second;
            placaMasPago = par.first;
        } else if (par.second == masPago){
            if(placaPosicion[par.first] < placaPosicion[placaMasPago]){
                masPago = par.second;
                placaMasPago = par.first;
            }
        }
    }

    cout << dineroRecaudado << endl;
    cout << rutaMasRecaudado << endl;
    cout << masUnaRutas << endl;
    cout << placaMasPago << endl;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int T = 1;
    while(T--) solve();
    return 0; 
}