#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

bool check(ll middle, vector<int> &necesaries, vector<int> &ingredients, int k){
    for(int i = 0; i < necesaries.size(); i++){
        ll canDo = ingredients[i]/necesaries[i];
        ll residuo = ingredients[i]%necesaries[i];

        if(canDo < middle){
            ll canNeed = middle-canDo;

            if(canNeed > k ) return false;
            
            ll kUse = necesaries[i]*canNeed - residuo;
            if(kUse > k) return false;
            k -= kUse;
        }
    }
    return true;
}

void solve(){
    int n, k; cin >> n >> k;    
    vector<int> ingredients(n), necesaries(n);
    
    for(int &x : necesaries) cin >> x;
    for(int &x : ingredients) cin >> x;

    ll left=0, right=1e18+9, middle, res=0;
    while(left <= right){
        middle = left+(right-left)/2;

        if(check(middle, necesaries, ingredients, k)){
            res = middle;
            left = middle + 1;
        } else {
            right = middle - 1;
        }
    }
    cout << res << endl;
}

int main(){
    int T = 1;
    while(T--){solve();}
    return 0;
}
