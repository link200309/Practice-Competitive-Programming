#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

void solve(int t){
    int N; cin >> N;

    int velocidadMinima=0;
    while (N--){
        int c; cin >> c;
        velocidadMinima = max(c, velocidadMinima);
    }
    cout << "Case " << t << ": " << velocidadMinima << endl;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    for(int i = 1; i <= t; i++ ) solve(i);
    return 0;
}