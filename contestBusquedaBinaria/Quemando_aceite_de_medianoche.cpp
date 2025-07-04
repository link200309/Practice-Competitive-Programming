#include <bits/stdc++.h>
#define ll long long
using namespace std;

//https://vjudge.net/problem/CodeForces-165B

bool isValid(ll medio, ll k, ll n){
    ll suma = medio, lc;
    for(int i = 1; i < 2e9 + 5; i++){
        if(suma >= n) return true;
        lc = medio / (ll)pow(k, i);
        if(lc == 0) break;
        suma += lc;
    }
    return suma >= n;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll n, k;

    cin >> n >> k;

    ll left = 1, right = n, medio;

    while(left <= right){
        medio = left + (right - left) / 2;

        if(isValid(medio, k, n)){
            right = medio - 1;
        } else {
            left = medio + 1;
        }
    }

    cout << left << '\n';
    
    return 0;
}
