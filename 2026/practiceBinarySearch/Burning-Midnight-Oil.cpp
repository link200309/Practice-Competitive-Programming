#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

bool check(int middle, int n, int k){
    int currentCode=0;

    for(int p=0; p < 1e9; p++){
        currentCode += middle/pow(k, p);
        
        if(currentCode >= n) return true;
        if(pow(k, p) > middle) return false;
    }
    return currentCode >= n;
}

void solve(){
    int n, k; cin >> n >> k;

    int left=1, right=1e9, middle, res;
    while(left <= right){
        middle = left + (right-left)/2;

        if(check(middle, n, k)){
            res = middle;
            right = middle-1;
        } else {
            left = middle+1;
        }
    }
    cout << res << endl;
}

int main(){
    int T = 1;
    while(T--){solve();}
    return 0;
}
