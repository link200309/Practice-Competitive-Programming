#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;


bool check(int middle, vector<int> trees, int M){
    ll cuted = 0;
    
    for(int i = 0; i < trees.size(); i++){
        if(trees[i] > middle) cuted += trees[i] - middle;
    }

    return cuted >= M; 
}

void solve(){
    int N, M; cin >> N >> M; 
    vector<int> trees(N);

    int treeMax = 0;
    for(int &x : trees) {cin >> x; treeMax = max(treeMax, x);} 

    int left = 0, right = treeMax, middle, res;
    while(left <= right){
        middle = left + (right-left)/2;

        if(check(middle, trees, M)){
            res = middle;
            left = middle + 1;
        } else {
            right = middle - 1;
        }
    }
    cout << res << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T = 1;
    while(T--){solve();}
    return 0;
}
