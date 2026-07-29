#include <bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;

bool check(ll middle, vector<int> &walls, int K){
    bool Kuse = false;
    for(int i = walls.size()-1; i >= 0; i--){
        ll need = max(0LL, middle-walls[i]);

        if(need > 0){
            Kuse = true;

            if(need > K) return false;
        }

        if(Kuse) K--;
    }

    return true;
}

void solve(){
    int N, K; cin >> N >> K;
    vector<int> walls(N);

    int minElement = 1e9;
    ll maxElement = 0;
    for(int &x : walls) {
        cin >> x;

        if(x > maxElement) maxElement = x;
        if(x < minElement) minElement = x;
    }

    ll left= minElement, right = maxElement+K, middle, res;
    while(left <= right){
        middle = left + (right-left)/2;

        if(check(middle, walls, K)){
            res = middle;
            left = middle + 1;
        } else {
            right = middle - 1;
        }
    } 
    cout << res << endl;
}

int main(){
    solve();
    return 0;
}