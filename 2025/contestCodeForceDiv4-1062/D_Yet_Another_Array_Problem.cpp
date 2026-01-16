#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define DBG(x) cerr << #x << " = " << (x) << " (line " << __LINE__ << ")" << endl;
#define DBG_ARR(arr) cerr << #arr << ": "; for (auto &_x : arr) cerr << _x << " "; cerr << endl;
const ll INF = 1e18; 
using namespace std;

bool isPrime(int x){
    if(x < 2) return false;
    if(x == 2) return true;
    if(x%2 == 0) return false;
    
    for(int i = 3; i * i <= x; i+=2){
        if(x%i==0) return false;
    }
    return true;
}

ll firtsPrime(ll a){
    for(ll i = 3; i < INF; i+=2){
        if(isPrime(i) && a%i != 0){
            return i;
        }
    }
    return -1;
}

void solve(){
    int n; cin >> n;
    vector<ll> ve(n);

    for(ll &x : ve) cin >> x;    

    ll min = 1e18;
    for(int i = 0; i < n; i++){
        ll temp;

        if(ve[i]%2 != 0){
            temp = 2;
        } else {
            temp = firtsPrime(ve[i]);
        }

        if(temp < min) min = temp;
    }
    cout << min << endl;
}

void init_code(){
        #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "r", stdout);
        freopen("debug.txt", "r", stderr);
        #endif
}

int main()
{
    // init_code();
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int T; cin >> T;
    while(T--){solve();}
    return 0;
}

//MEJOR SOLUCION
//Solucion donde se busca el menor primo que no divida a alguno de los elementos del array, no para cada elemento individual buscar el menor primo que no lo divida xd 

// Author: BehruzbekX
// #include <bits/stdc++.h>
// using namespace std;
// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(0);
//     using ll = long long;
//     int t;
//     cin >> t;
//     while (t--) {
//         int n;
//         cin >> n;
//         vector<ll> a(n);
//         for (auto &i: a) cin >> i;
//         for (ll x : {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53}) {
//             int ok = 0;
//             for (ll i : a) {
//                 if (i % x) {
//                     ok = 1;
//                     break;
//                 }
//             }
//             if (ok) {
//                 cout << x << '\n';
//                 break;
//             }
//         }
//     }
// }