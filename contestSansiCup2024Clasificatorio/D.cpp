#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define DBG(x) cerr << #x << " = " << (x) << " (line " << __LINE__ << ")" << endl;
#define DBG_ARR(arr) cerr << #arr << ": "; for (auto &_x : arr) cerr << _x << " "; cerr << endl;
const ll INF = 1e18; 
using namespace std;


bool isValid(ll medio, vector<int> &ve, int k){
    ll capBol = medio; //388

    for(int i = 0; i < ve.size(); i++){
        if(k <= 0 || ve[i] > medio) return false;

        if(ve[i] <= capBol){  
            capBol -= ve[i];
        } else {
            k--;
            capBol = medio;
            i--;
        }

        // if(medio == 388) DBG(capBol);

    }
    return k >= 1;
}

void solve(){
    int n; cin >> n;
    vector<int> ve(n);

    for(int &x : ve) cin >> x;

    // sort(ve.begin(), ve.end());

    int k; cin >> k;

    ll left = 1, right = INF, medio;

    while (left <= right) {
        medio = left + (right - left)/2;

        // DBG(medio);

        if(isValid(medio, ve, k)){
            right = medio - 1;
        } else {
            left = medio + 1;
        }
    }
    cout << left << endl;
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int T = 1;
    while(T--){solve();}
    return 0;
}
