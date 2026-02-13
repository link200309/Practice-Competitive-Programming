#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

void solve(){
    
    while(true){
        int meses, registroDepreciacion; cin >> meses; 

        if(meses < 0) return;

        double montoInicial, prestamo; cin >> montoInicial >> prestamo >> registroDepreciacion;
    
        double valorAuto = prestamo + montoInicial;
        double cuota = prestamo/meses;
    
        vector<double> depreciaciones(meses+1, -1);
    
        for(int i = 0; i < registroDepreciacion; i++){
            int mes; cin >> mes;
            double depreciacion; cin >> depreciacion;
            depreciaciones[mes] = depreciacion;
        }   
        
        valorAuto *= (1-depreciaciones[0]);
        double depreciacionAnterior = depreciaciones[0];

        if(prestamo < valorAuto){
                cout << "0 months" << endl;
                continue;
            }

        for(int i = 1; i <= meses; i++){
            double depreciacionMes;

            if(depreciaciones[i] != -1){
                depreciacionMes = depreciaciones[i]; 
                depreciacionAnterior = depreciaciones[i];
            } else {
                depreciacionMes = depreciacionAnterior;
            }

            prestamo -= cuota;
            valorAuto *= (1-depreciacionMes);
            
            if(prestamo < valorAuto){
                cout << i << (i==1? " month" : " months") << endl;
                break;
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t=1;
    while(t--) solve();
    return 0;
}