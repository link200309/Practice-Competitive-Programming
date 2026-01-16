#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; 
    cin >> n;

    int left = 1, right = n, med = -1;

    while(left <= right){
        med = left + (right-left)/2;

        if(med == n/med){
            cout << med;
            break;
        } else if (med > n/med){
            right = med - 1;
        } else {
            left = med + 1;
        }
    }

    if(med != n/med) cout << right;

    return 0;
}
