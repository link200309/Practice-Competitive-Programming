#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define DBG(x) cerr << #x << " = " << (x) << " (line " << __LINE__ << ")" << endl;
#define DBG_ARR(arr) cerr << #arr << ": "; for (auto &_x : arr) cerr << _x << " "; cerr << endl;
using namespace std;


void solve(){
    int n; cin >> n;
    vector<int> arr (n);

    for(int &x : arr) cin >> x;

    int ini = arr[0];
    int fin = arr[n-1];
    int min = 0;

    if(ini == -1 && fin == -1){
        arr[0] = 0; 
        arr[n-1] = 0; 
    } else if (ini == -1 && fin != -1){
        arr[0] = arr[n-1];
    } else if (ini != -1 && fin == -1){
        arr[n-1] = arr[0];
    }

    cout << abs(arr[0] - arr[n-1]) << endl;

    // DBG_ARR(arr);

    for (int &x : arr){
        if(x == -1)
            cout << 0 << " ";
        else cout << x << " ";
    }
    cout << endl;
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int T;
    cin >> T;
    while(T--){solve();}
    return 0;
}
