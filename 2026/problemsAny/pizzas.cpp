#include <bits/stdc++.h>
using namespace std;

void solve(){
    int N; cin >> N;

    int pedazosAnt = 1;
    int i = 1;
    for(; pedazosAnt < N; i++){
        pedazosAnt = pedazosAnt + i;
    }

    cout << i - 1<< endl;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int T; cin >> T;
    while(T--) solve();
    return 0; 
}


