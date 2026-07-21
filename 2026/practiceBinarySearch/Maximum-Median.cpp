#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;


//https://vjudge.net/contest/356290#problem
bool check(int middle, vector<int> &ve, int k){

    for(int i = ve.size()/2; i < ve.size() && k>=0; i++){
        if(middle > ve[i]) k-= middle - ve[i];
        else break;
    }
    return k>=0;
}

void solve(){
    int n, k; cin >> n >> k;
    vector<int> ve(n);

    for(int &x : ve) cin >> x;

    sort(ve.begin(), ve.end());

    int left=ve[n/2], right=ve[n/2]+k, middle, res;
    while(left<=right){
        middle=left+(right-left)/2;

        if(check(middle, ve, k)){
            res = middle;
            left = middle+1;
        } else {
            right = middle-1;
        }
    }
    cout << res << endl;

}

int main(){
    int T = 1;
    while(T--){solve();}
    return 0;
}
