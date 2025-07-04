#include <bits/stdc++.h>
using namespace std;

bool isValid(vector<long long> &ve, long long medio, long long t){
    long long f = 0;

    for(long long i = 0; i < ve.size(); i++){
        f += medio / ve[i];
        if(f >= t) return true;
    }
    return false;
}



int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long n, t;

    cin >> n >> t;

    vector<long long> ve(n);

    for(long long &x : ve) cin >> x;
    sort(ve.begin(), ve.end());

    long long left = 1, right = 2e18 + 5, medio;

    while(left <= right){
        medio = left + (right - left) / 2;

        if(isValid(ve, medio, t)){
            right = medio - 1;
        } else {
            left = medio + 1;
        }
    }
    cout << left << '\n';
    return 0;
}
