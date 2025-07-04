#include <bits/stdc++.h>
using namespace std;

bool isValid(int media, int k, vector<int> &ve, int n){
    long long operaciones = 0;

    for(int i = n/2; i < n; i++){
        if(ve[i] < media){
            operaciones += media - ve[i];
            if(operaciones > k) return false;
        }
    }
    return operaciones <= k;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, k;
    cin >> n >> k;
    vector<int> ve(n);

    for(int &x : ve) cin >> x;

    sort(ve.begin(), ve.end());

    long long left = 1, right = 2e9, media;

    while(left <= right){
        media = left + (right - left) / 2;

        if(isValid(media, k, ve, n)){
            left = media + 1;
        } else {
            right = media - 1;
        }
    }
    cout << right;
    return 0;
}
