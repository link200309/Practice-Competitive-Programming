#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define all(x) x.begin(), x.end()
#define DBG(x) cerr << #x << " = " << (x) << " (line " << __LINE__ << ")" << endl;
#define DBG_ARR(arr) cerr << #arr << ": "; for (auto &_x : arr) cerr << _x << " "; cerr << endl;
const ll INF = 1e18;
using namespace std;
 
void solve(){
    int n; cin >> n;
    vector<int> ve(n+1);
    string res = "YES";

    ve[0] = 0;
    for(int i = 1; i <= n; i++) cin >> ve[i];

    for(int i = 1; i <= n/2; i++){
        int menor=ve[i], posMenor=i;
        for(int j = 2; j*i <= n; j*=2){
            if(ve[i*j] < menor){
                menor = ve[i*j];
                posMenor = i*j;
            }    
        }
        int aux = ve[i];
        ve[i] = menor;
        ve[posMenor] = aux;
    }

    cout << (is_sorted(ve.begin()+1, ve.end())? "YES" : "NO") << endl; 
}
 
int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int T; cin >> T;
    while(T--){solve();}
    return 0;
}