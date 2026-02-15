#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

void solve(int t){
    int N; cin >> N; 
    queue<int> V, J, C, S;

    while(N--){
        int llegada; cin >> llegada;
        char tipo; cin >> tipo;

        if(tipo == 'V') V.push(llegada);
        else if(tipo == 'J') J.push(llegada);
        else if(tipo == 'C') C.push(llegada);
        else S.push(llegada);
    }

    int tiempo = 0, tiempoPro = 0, tiempoNoob=0;
    while(!V.empty()||!J.empty()||!C.empty()||!S.empty()){
        if(tiempoPro == 0){
            if(!V.empty() && V.front() <= tiempo){
                tiempoPro = 5; V.pop();
            } else if(!J.empty() && J.front() <= tiempo){
                tiempoPro = 5; J.pop();
            } else if(!C.empty() && C.front() <= tiempo){
                tiempoPro = 5; C.pop();
            } else if(!S.empty() && S.front() <= tiempo){
                if(tiempo - S.front() > 10){
                    tiempoPro = 5; S.pop();
                }
            }
        }

        if(tiempoNoob == 0){
            if(!S.empty() && S.front() <= tiempo){
                tiempoNoob = 2; S.pop();
            }
        }

        if(tiempoNoob < tiempoPro){
            if(tiempoNoob == 0){
                tiempo += tiempoPro; 
                tiempoPro = 0;
            } else {
                tiempo += tiempoNoob;
                tiempoPro -= tiempoNoob;
                tiempoNoob = 0;
            }
        } else if(tiempoPro < tiempoNoob){
            if(tiempoPro == 0){
                tiempo += tiempoNoob;
                tiempoNoob = 0;
            } else {
                tiempo += tiempoPro;
                tiempoNoob -= tiempoPro;
                tiempoPro = 0;
            }
        } else {
            if(tiempoNoob == 0 && tiempoPro == 0){
                int nxt = INT_MAX;
                if(!V.empty()) nxt = min(nxt, V.front());
                if(!J.empty()) nxt = min(nxt, J.front());
                if(!C.empty()) nxt = min(nxt, C.front());
                if(!S.empty()) nxt = min(nxt, S.front());
                tiempo += nxt;
            } else {
                tiempo += tiempoNoob;
                tiempoNoob = 0;
                tiempoPro = 0;
            }
        }
    }

    cout << tiempo << endl;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t=1;
    for(int i = 1; i <= t; i++ ) solve(i);
    return 0;
}