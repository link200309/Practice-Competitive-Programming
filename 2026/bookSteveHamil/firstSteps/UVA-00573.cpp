#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

void solve(int t){
    
    while(true){
        double H, U, D, F; cin >> H >> U >> D >> F;
        if(H == 0) return;

        double factor = U * ((double)F/100.0);

        double alturaInicial = 0.0;
        int dias = 0;
        bool ok = false;
        while(alturaInicial >= 0 && alturaInicial <= H){
            dias++;
            alturaInicial += U;
            
            if(alturaInicial > H){ok=true;break;}

            alturaInicial -= D;

            U = max(U-factor, 0.0);
        }

        cout << (ok? "success on day " : "failure on day ") << dias << endl;
    }
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t=1;
    for(int i = 1; i <= t; i++ ) solve(i);
    return 0;
}