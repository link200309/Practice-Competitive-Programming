#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define all(x) x.begin(), x.end()
#define DBG(x) cerr << #x << " = " << (x) << " (line " << __LINE__ << ")" << endl;
#define DBG_ARR(arr) cerr << #arr << ": "; for (auto &_x : arr) cerr << _x << " "; cerr << endl;
const ll INF = 1e18;
using namespace std;

bool isValid(int middle, vector<int> &dis){
    for(int d : dis){
        if(!(d > middle)){
            return false;
        }
        middle = d - middle;
    }
    return true;
}

void solve(){
    int N; cin >> N;
    vector<int> dis(N-1);
    
    pair<int, int> cordAnt = {-1, -1};
    pair<int, int> cordFirst = {-1, -1};
    pair<int, int> cordSecond = {-1, -1};
    
    for(int i = 0; i < N; i++){
        int x, y; cin >> x >> y;

        if(i == 0){
            cordAnt = {x, y}; 
            cordFirst = {x, y};           
        } else {
            if(i == 1) cordSecond = {x, y};

            if(x == cordAnt.first){
                dis[i-1] = y - cordAnt.second;
            } else {
                dis[i-1] = x - cordAnt.first;
            }
            cordAnt = {x, y};
        }
    }

    int left = cordFirst.first == cordSecond.first? cordFirst.second : cordFirst.first;
    int right = cordFirst.first == cordSecond.first? cordSecond.second : cordSecond.first;
    int middle;
    while(left < right){
        middle = left + (right - left)/2;

        if(isValid(middle, dis)){
            if(middle == left) break;
            left = middle;
        } else {
            right = middle;
        }
    }
    cout << (middle == 0? -1 : middle)  << endl;
}
 
int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int T = 1;
    while(T--){solve();}
    return 0;
}