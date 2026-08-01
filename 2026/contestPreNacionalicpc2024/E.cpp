#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;


void solve(){
    int n; cin >> n;
    vector<int> factores;

    for(int i = 2; i * i <= n; i++){
        while(n%i == 0){
            factores.push_back(i);
            n /= i;
        }
    }

    if(n > 1) factores.push_back(n);

    for(int i = 0; i < factores.size(); i++){
        
        if(i) cout << "x";

        cout << factores[i];
    }
}

int main(){
    solve();
    return 0;
}
