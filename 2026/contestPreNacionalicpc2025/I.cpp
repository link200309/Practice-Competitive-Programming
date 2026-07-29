#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define all(x) x.begin(), x.end()
#define DBG(x) cerr << #x << " = " << (x) << " (line " << __LINE__ << ")" << endl;
#define DBG_ARR(arr) cerr << #arr << ": "; for (auto &_x : arr) cerr << _x << " "; cerr << endl;
const ll INF = 1e18;
using namespace std;

bool isValid(int middle, vector<int> &dis){
    for(int d:dis){
        if(middle>=d) return false;
        middle=d-middle-1;
    }
    return true;
}

void solve(){
    int N; cin >> N;
    vector<int> dis(N-1);
    vector<pair<int, int>> starts(N);
    
    int x, y; cin >> x >> y;
    starts[0] = {x, y};
    for(int i = 1; i < N; i++){
        cin >> x >> y;
        starts[i] = {x, y};

        if(x == starts[i-1].first){
            dis[i-1] = abs(y - starts[i-1].second);
        } else {
            dis[i-1] = abs(x - starts[i-1].first);
        }
    }

    int left=1, right=dis[0]-1, middle, res = -1;
    while(left <= right){
        middle = left + (right - left)/2; 

        if(isValid(middle, dis)){
            res = middle;
            left = middle+1;
        } else {
            right = middle-1;
        }
    }
    cout << res << endl;
}
 
int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int T = 1;
    while(T--){solve();}
    return 0;
}