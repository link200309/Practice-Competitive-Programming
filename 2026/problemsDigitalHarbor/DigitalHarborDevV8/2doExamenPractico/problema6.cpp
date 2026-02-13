#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

bool esPrimo(int n){
	if(n < 2) return false;
	if(n == 2) return true;
	if(n % 2 == 0) return false;
	for(int i = 3; i * i <= n; i+=2){
		if(n%i==0) return false;
	}
	return true;
}

void solve() {
    int N; cin >> N;
    vector<int> mejores(N); 
    int mejorMejores = 0;
    int ganador = -1;
    int actualNum = 0;
    for(int i = 0; i < N; i++){
        for(int J = 0; J < N; J++){
            int p; cin >> p;
            if(esPrimo(p)){
                actualNum++;
                if(actualNum > mejores[i]) mejores[i]=actualNum;
            } else {
                actualNum = 0;
            }
        }
        actualNum = 0;

        if(mejores[i] > mejorMejores){
            ganador = i+1;
            mejorMejores = mejores[i];
        }
    }

    if(mejorMejores == 0){
        cout << "pipipi";
    } else {
        cout << "p" << ganador;
    }
}

int main() {
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int T = 1;
    while (T--) solve();
    return 0;
}