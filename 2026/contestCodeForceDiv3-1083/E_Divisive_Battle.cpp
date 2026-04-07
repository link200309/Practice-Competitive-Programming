#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define all(x) x.begin(), x.end()
#define DBG(x) cerr << #x << " = " << (x) << " (line " << __LINE__ << ")" << endl;
#define DBG_ARR(arr) cerr << #arr << ": "; for (auto &_x : arr) cerr << _x << " "; cerr << endl;
const ll INF = 1e18;
using namespace std;

bool isPrime(int n){
	if(n < 2) return false;
	if(n == 2) return true;
	if(n % 2 == 0) return false;
	for(int i = 3; i * i <= n; i+=2){
		if(n%i==0) return false;
	}
	return true;
}

bool masPrimos(int x){
    int count = 0;

    for(int i = 2; i * i <= x; i++){
        if(x % i == 0){
            count++;
            while(x % i == 0) x /= i;
        }
    }

    if(x > 1) count++;
    return count >= 2;
}

void solve(){
    int n; cin >> n;
    vector<int> ve(n);

    for(int &x : ve) cin >> x;

    if(is_sorted(all(ve))) {cout << "Bob" << endl; return;}

    for(int &x : ve){
        bool res = masPrimos(x);
        if(res) {cout << "Alice" << endl; return;}
    }

    vector<int> B(n);
    for(int j = 0; j < n; j++){
        if(ve[j] == 1) {B[j] = 1; continue;}

        B[j] = ve[j];

        for(int i = 2; i*i <= ve[j]; i++){
            if(ve[j]%i == 0){
                B[j] = i;
                break;
            }
        }
    }

    if(is_sorted(all(B))) cout << "Bob" << endl;
    else cout << "Alice" << endl;
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int T; cin >> T;
    while(T--){solve();}
    return 0;
}
