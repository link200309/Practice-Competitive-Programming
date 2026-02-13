#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

void imprimirArray(vector<vector<int>> enems, int turnos, int turno){
    cout << "----turnos: " <<turnos << " Persona: "<<turno<<endl;

    for(vector<int> enem : enems){
        for(int stat : enem){  
            cout << stat << " ";
        }
        cout << endl;
    }
    cout << "-----------"<<endl;
}

void solve(){
    int N, H, A; cin >> N >> H >> A;
    vector<vector<int>> enems(N);

    for(int i = 0; i < N; i++){
        int h, a, s; cin >> h >> a >> s;
        enems[i] = {h, a, s};
    }

    int tam = enems.size();
    int turno = 1; //1 = Jugador && 2 = Enemigos
    int turnos = 0;
    while(tam > 0 && H > 0){
        turnos++;
        if(turno == 1){
            for(int i = 0; i < tam; i++){
                enems[i][0] -= A;
                if(enems[i][0] <= 0){
                    enems.erase(enems.begin()+i);
                    tam--;
                    i--;
                }
            }
            turno = 2;
        } else {
            turno = 1;
            for(int i = 0; i < tam; i++){
                H -= enems[i][1];
                if((turnos-1)%enems[i][2] == 0) turno = 2;
            }
        }
        // imprimirArray(enems, turnos, turno);
    }

    cout << turnos << endl;
 }

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int T; cin >> T;
    while(T--) solve();
    return 0; 
}
