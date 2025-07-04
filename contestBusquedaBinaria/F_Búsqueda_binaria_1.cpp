#include <bits/stdc++.h>
using namespace std;

long long lower_bound(vector<long long> &ve, long long x){
    long long left = 0, right = ve.size()-1, medio, res = -1;

        while(left <= right){
            medio = left + (right - left)/2;
            if(ve[medio] >= x){
                right = medio - 1;
                if(ve[medio] == x) res = medio; 
            } else{
                left = medio + 1; 
            }
        }
    return res;
}
long long upper_bound(vector<long long> &ve, long long x){
    long long left = 0, right = ve.size()-1, medio, res = -1;

        while(left <= right){
            medio = left + (right - left)/2;
            if(ve[medio] <= x){
                left = medio + 1;
                if(ve[medio] == x) res = medio; 
            } else{
                right = medio - 1; 
            }
        }
    return res;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    long long n, q;

    cin >> n >> q;
    vector<long long> ve(n);

    for(long long &x : ve) cin >> x;

    long long x;
    while(q--){
        cin >> x;
        if(n == 0){
            cout << 0 << '\n';
            continue;
        }

        long long resLowerBound = lower_bound(ve, x); 
        long long resUpperBound = upper_bound(ve, x); 

        if(resLowerBound == -1 || resUpperBound == -1){
            cout << 0 << '\n';
            continue;    
        }

        long long count = resUpperBound - resLowerBound; 
        cout << count + 1 << '\n';
    }
    return 0;
}
