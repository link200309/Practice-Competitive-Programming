#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

void solve(){
    int RFP=0;
    while(true){
        int N, P; cin >> N >> P;
        if(N == 0 && P == 0) return;
        RFP++;

        if(RFP != 1) cout << endl;

        cin.ignore();
        while(N--){
            string linea; getline(cin, linea);
        }

        double precioMejorPropuesta = INT_MAX;
        string mejorPropuesta;
        int masCumplidos = 0;
        while(P--){
            string propuesta; getline(cin, propuesta);
            double precio; cin >> precio;
            int cumplidos; cin >> cumplidos;

            if((cumplidos > masCumplidos) || (cumplidos == masCumplidos && precio < precioMejorPropuesta)){
                mejorPropuesta = propuesta;
                precioMejorPropuesta = precio;
                masCumplidos = cumplidos;
            } 
            cin.ignore();
            while(cumplidos--){
                string linea; getline(cin, linea);
            }
        }

        cout << "RFP #" << RFP << endl;
        cout << mejorPropuesta << endl;
    }
    
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t=1;
    while(t--) solve();
    return 0;
}