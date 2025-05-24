#include <bits/stdc++.h>
using namespace std;


// 1 1  3  4 6
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, k;
    cin >> n >> k;
    vector<int> ve(n);

    for(int &x : ve) cin >> x;

    sort(ve.begin(), ve.end());

    int left = 0; int right = n-1, medio;
    while(left <= right){
        medio = left + (right - left) / 2;

        if(ve[medio] <= k){
            left = medio + 1;
        } else {
            right = medio - 1;
        }
    }   
    
    cout << medio;

    return 0;
}
