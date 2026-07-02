#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define all(x) x.begin(), x.end()
#define DBG(x) cerr << #x << " = " << (x) << " (line " << __LINE__ << ")" << endl;
#define DBG_ARR(arr) cerr << #arr << ": "; for (auto &_x : arr) cerr << _x << " "; cerr << endl;
const ll INF = 1e18;
using namespace std;

bool isOne(vector<int> &poli){
    if(poli[0] != 1) return false;
    for(int i = 1; i < poli.size(); i++){
        if(poli[i] == 1) return false;
    }
    return true;
}

void solve(){
    int N; cin >> N;
    int tamPoli = N+2;
    vector<int> poli(tamPoli);

    while(N >= 0){
        int num; cin >> num;
        poli[N] = num;
        N--;
    }

    int cont = 0;
    while(!isOne(poli)){
        if(poli[0] == 1){
            vector<int> newPoli(tamPoli, 0);
            for(int i = tamPoli-2; i >= 0; i--){
                if(poli[i] == 1){
                    newPoli[i+1] = poli[i+1] == 0? 1:0;
                    newPoli[i] = i != 0 && poli[i-1] == 0? 1:0;
                }
            }
            poli = newPoli;
        } else {    
            for(int i = 0; i < tamPoli-1; i++){
                if(poli[i+1] == 1){
                    poli[i] = 1;
                    poli[i+1] = 0;
                }
            }
            poli[tamPoli-1] = 0;
        }
        cont++;
    }
    cout << cont << endl;
}
 
int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int T = 1;
    while(T--){solve();}
    return 0;
}