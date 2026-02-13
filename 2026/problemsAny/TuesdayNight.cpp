#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

void solve(){
    int n; cin >> n;
    vector<int> ve;
    int sal = 0;
    for(int i = 1; sal < n; i++){
        ve.push_back(sal);
        sal += i;
        if(sal == n){
            cout << 1 << endl;
            return;
        }

        if(sal > n){
            int num = n-sal+i;
            auto it = find(ve.begin(), ve.end(), num);

            if(it != ve.end()) cout << 2 << endl;
            else cout << 3 << endl;

            return;
        }
    }

}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int T; cin >> T;
    while(T--) solve();
    return 0; 
}


