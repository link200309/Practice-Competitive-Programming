#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define DBG(x) cerr << #x << " = " << (x) << " (line " << __LINE__ << ")" << endl;
#define DBG_ARR(arr) cerr << #arr << ": "; for (auto &_x : arr) cerr << _x << " "; cerr << endl;
const ll INF = 1e18; 
using namespace std;

void ordenar_medio(vector<int> &segundo){
    auto it = min_element(segundo.begin(), segundo.end());
    rotate(segundo.begin(), it, segundo.end());
    // int index = it - segundo.begin();
    // vector<int> ordenado;
    
    // ordenado.insert(ordenado.end(), segundo.begin()+index, segundo.end());
    // ordenado.insert(ordenado.end(), segundo.begin(), segundo.begin()+index);

    // segundo = ordenado;
}

void solve(){
    int n, x, y; cin >> n >> x >> y;
    vector<int> primero, segundo, tercero;

    for(int i = 0; i < n; i++){
        int num; cin >> num;
        if(i < x){
            primero.push_back(num);
        } else if (i >= x && i < y){
            segundo.push_back(num);
        } else if (i >= y){
            tercero.push_back(num);
        }
    }

    ordenar_medio(segundo);

    if(!primero.empty()){
        if(primero[0] > segundo[0]){
            tercero.insert(tercero.begin(), primero.begin(), primero.end());
            primero.clear();
        } else {
            for(int i = 1; i < primero.size(); i++){
                if(primero[i] > segundo[0]){
                    tercero.insert(tercero.begin(), primero.begin()+i, primero.end());
                    primero.erase(primero.begin()+i, primero.end());             
                }
            }

            if(!tercero.empty() && tercero[0] <= segundo[0]){
            for(int i = 0; i < tercero.size(); i++){
                if(tercero[i] <= segundo[0]){
                    primero.push_back(tercero[i]);
                    tercero.erase(tercero.begin()+i);
                    i--;
                } else {
                    break;
                }
            }
        }
        }
    } else if (!tercero.empty()) {
        if(tercero[0] <= segundo[0]){
            for(int i = 0; i < tercero.size(); i++){
                if(tercero[i] <= segundo[0]){
                    primero.push_back(tercero[i]);
                    tercero.erase(tercero.begin()+i);
                    i--;
                } else {
                    break;
                }
            }
        }
    }

    for(int &x : primero){
        cout << x << " ";
    }
    for(int &x : segundo){
        cout << x << " ";
    }
    for(int &x : tercero){
        cout << x << " ";
    }
    cout << endl;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int T; cin >> T;
    while(T--){solve();}
    return 0;
}
