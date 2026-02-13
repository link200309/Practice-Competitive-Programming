#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

void solve(){
    int N, P, H, S;

    while(cin >> N >> P >> H >> S){
        int PM = 1e7; 
        bool ok;
        string res = "stay home";
        while(H--){
            int PP; cin >> PP;
            ok = true;
    
            if(PP*N > P){ok = false;}
    
            bool D = false;
            for(int i = 0; i < S; i++){
                int dis; cin >> dis;
                if(dis >= N) {D=true;}
            }
            
            if(!D || !ok){ok=false; continue;}
    
            PM = min(PP*N, PM);
            res = to_string(PM);
        }
    
        cout << res << endl;
    }
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t=1;
    while(t--) solve();
    return 0;
}