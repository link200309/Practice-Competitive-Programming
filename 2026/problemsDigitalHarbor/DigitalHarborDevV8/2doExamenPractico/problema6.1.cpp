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

void solve(int t){
    int N; cin >> N;
    cin.ignore();
    int mayorPrimos = 0;
    string res = "pipipi";

    for(int i = 1; i <= N; i++){
        string p;
        getline(cin, p);
        stringstream  ss(p);
        
        int consecutivos = 0;
        int personalidad;
        while(ss >> personalidad){
            if(esPrimo(personalidad)){
                consecutivos++;
                if(consecutivos >= mayorPrimos){
                    mayorPrimos = consecutivos;
                    res = "p"+to_string(i);
                }
            } else {
                consecutivos = 0;
            }
        }

    }
    cout << res << endl;

}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t=1;
    for(int i = 1; i <= t; i++ ) solve(i);
    return 0;
}