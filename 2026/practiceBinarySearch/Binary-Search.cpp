#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;


void solve(){
    int n, q; cin >> n >> q;
    vector<int> arr(n);

    for(int &x : arr) cin >> x;

    while(q--){
        int num; cin >> num;
        auto it = lower_bound(arr.begin(), arr.end(), num);
        
        if(it != arr.end()){
            int posIni = it - arr.begin();
            it = upper_bound(arr.begin(), arr.end(), num);
            int posFin = it - arr.begin();
            cout << (posFin - posIni) << endl;
        } else {
            cout << "0" << endl;
        }

    }
}

int main(){
    int T = 1;
    while(T--){solve();}
    return 0;
}
