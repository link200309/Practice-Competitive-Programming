#include <bits/stdc++.h>
using namespace std;


bool isValid(vector<long long> &nec, vector<long long> &ten, long long medio, long long k){
    vector<long long> necesito = nec;
    vector<long long> tengo = ten;
    
    for(long long i = 0; i < necesito.size(); i++){    
        long long x = tengo[i] / necesito[i];
        if(tengo[i] + k < necesito[i]) return false;
        if(x < medio){
            if(k <= 0) return false;
            long long gf = medio - x;
            long long in = (gf * necesito[i]) - (tengo[i] - x * necesito[i]);
            if(in > k) return false;
            tengo[i] += in;
            k -= in;
        }
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long n, k;

    cin >> n >> k;
    vector<long long> nec(n);
    vector<long long> ten(n);

    for(long long &x : nec) cin >> x;
    for(long long &x : ten) cin >> x;

    long long left = 1, right = 2e9+5, medio;

    while(left <= right){
        medio = left + (right - left)/2;

        // cout << "Izquierda es" << left << endl;
        // cout << "Medio es" << medio << endl;
        // cout << "La derecha es" << right << endl << endl;

        if(isValid(nec, ten, medio, k)){
            left = medio + 1;
        } else {
            right = medio - 1;
        }
    }
    cout << right;

    return 0;
}
