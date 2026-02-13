#include <bits/stdc++.h>
using namespace std;
using boost::multiprecision::cpp_int;

void solve(){
    long long A, B, N; cin >> A >> B >> N;
    long long C;
    cpp_int t;
    for(int i = 2; i < N; i++){
        C = B*B + A;
        A = B;
        B = C;
    }
    cout << C << endl;
}

int main(){
    solve();
    return 0;
}