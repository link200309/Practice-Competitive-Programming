#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;


void solve(){
    int n, q; cin >> n >> q;
    vector<int> arr(n);

    for(int &x : arr) cin >> x;

    while(q--){
        int num; cin >> num;

        int left = 0, right = n-1, middle;
        string res = "NO";
        while(left <= right){
            middle = left + (right-left)/2;

            if(arr[middle] == num){
                res = "YES";
                break;
            } else if (num > arr[middle]) {
                left = middle+1;
            } else {
                right = middle-1;
            }
        }
        cout << res << endl;
    }
}

int main(){
    int T = 1;
    while(T--){solve();}
    return 0;
}
