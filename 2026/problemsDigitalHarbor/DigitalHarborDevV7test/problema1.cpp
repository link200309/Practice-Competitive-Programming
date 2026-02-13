#include <bits/stdc++.h>
using namespace std;

void solve(){
    int N; cin >> N;
    int contador = 0;
    while(N--){
        int x; cin >> x;

        if(x >= 10) contador++;
    }
    cout << contador << endl;
}

int main(){
    solve();
    return 0;
}