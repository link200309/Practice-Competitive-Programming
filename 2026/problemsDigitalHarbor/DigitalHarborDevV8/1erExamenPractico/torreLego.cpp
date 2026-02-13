#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

bool feo (int h) {
    for(int d : {2, 3, 5}){
        while(h%d == 0) h /= d;
    }
    return h == 1;
}

void solve(){
    int N, Hmin; cin >> N >> Hmin;

    int cAnt = 0, hAnt = 0;
    bool ok = true;
    for(int i = 1; i <= N && ok; i++){
        int c, h; cin >> c >> h;
        if(h <= hAnt){
            ok = false;
        } else if (cAnt == c) {
            ok = false;
        } else if (c == 1 && i%2 != 0){
            ok = false;
        } else if (feo(h) && c != 1 && (c%2 != 0 && c%5 != 0)) {
            ok = false;
        }
        
        cAnt = c;
        hAnt = h;
        Hmin -= h;
    }

    if(Hmin > 0) ok = false;
    
    cout << (ok? "Valida" : "Invalida") << endl;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int T = 1;
    while(T--) solve();
    return 0; 
}
