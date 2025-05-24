#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, k, kAux;
    cin >> n >> k;
    kAux = k;
    vector<int> a(n);
        
    for(int &x : a) cin >> x;

    sort(a.begin(), a.end());

    int mediana = a[n / 2];
    auto it = upper_bound(a.begin()+n/2, a.end(), mediana);
    int dis = distance(a.begin()+n/2, it);
    int lim = distance(a.begin(), it);

    for(int i = n/2; i <= lim && kAux > 0; i++){
        if(k/dis <= kAux){
            a[i]+=(k/dis);
            kAux -= (k/dis); 
        } else {
            a[i]+= kAux;
            kAux = 0;
        }
    }

    sort(a.begin(), a.end());

    cout << a[n / 2];

    return 0;
}
