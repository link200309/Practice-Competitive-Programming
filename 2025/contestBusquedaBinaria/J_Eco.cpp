#include <bits/stdc++.h>
#define ll long long
using namespace std;

//https://vjudge.net/problem/SPOJ-EKO

bool isValid(vector<ll> ve, ll medio, ll M){
    ll c = 0;
    for(int i = ve.size()-1; i >= 0; i--){
        if(ve[i] < medio) break;
        c += ve[i] - medio;
        if(c >= M) return true;
    }
    return c >= M;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll N, M;

    cin >> N >> M;
    vector<ll> ve(N);
    
    for(ll &x : ve) cin >> x;
    sort(ve.begin(), ve.end());

    ll left = 1, right = 2e9 + 5, medio;

    while (left <= right){
        medio = left + (right - left)/2;
        // cout << medio << endl;

        if(isValid(ve, medio, M)){
            left = medio + 1;
        } else {
            right = medio - 1;
        }
    }    
    cout << right << "\n";

    return 0;
}
