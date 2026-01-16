#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t, n, q, num, l, r, k, sumaArr=0;
    cin >> t;
    
    while(t-- > 0){
        cin >> n >> q;
        vector<int> prefix(n+1, 0);
            for(int i=0; i < n; i++){
                cin >> num;
                prefix[i+1] = num + prefix[i];
                sumaArr += num;
            }
        while(q-- > 0){
            cin >> l >> r >> k;
            if((sumaArr - prefix[r] - prefix[l-1] + (r-l+1)*k)%2 != 0){
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
        sumaArr = 0;
    }

    return 0;
}
