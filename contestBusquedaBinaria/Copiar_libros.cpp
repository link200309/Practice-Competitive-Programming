#include <bits/stdc++.h>
#define ll long long
using namespace std;

//https://vjudge.net/problem/SPOJ-BOOKS1

bool isValid(vector<ll> &ve, ll medio, ll k){
    vector<ll> trab(k, 0);
    ll i = 0;
    for(ll j = 0; j < k; j++){
        for(; i < ve.size(); i++){
            if(((trab[j] + ve[i]) <= medio) && ((ve.size() -  1-  i) >= (k -1- j))){
                trab[j] += ve[i];
            } else {
                if(((trab[j] + ve[i]) > medio) && (j + 1 == k)) return false;
                break;
            }
        }
    }
    return true;
}

string format(vector<ll> &ve, ll limite, ll k){
    vector<ll> trab(k, 0);
    ll i = ve.size()-1;
    string res = "";
    for(ll j = k-1; j >= 0; j--){
        for(; i >= 0; i--){
            if((trab[j] + ve[i]) <= limite && (i >= j)){
                trab[j] += ve[i];
                res = to_string(ve[i]) +" "+ res;
            } else {
                res = "/ " + res;
                break;
            }
        }
    }
    return res;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll N, m, k;
    cin >> N;
    
    while(N--){
        cin >> m >> k;
        vector<ll> ve(m);
        ll suma = 0;
        for(ll &x : ve) {
            cin >> x;
            suma += x;
        }
        // sort(ve.begin(), ve.end());

        ll left = ve[0], right = suma, medio;
        
        while(left <= right){
            medio = left + (right - left) / 2;
            // cout << "La izquierda es" <<  left << endl;
            // cout << "El medio es" << medio << endl;
            // cout << "La derecha es" << right << endl;
            if(isValid(ve, medio, k)){
                right = medio - 1;
            } else {
                left = medio + 1;
            }
        }

        string res = format(ve, left, k);

        cout << res << "\n";

    }

    return 0;
}
