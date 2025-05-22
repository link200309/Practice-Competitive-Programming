#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, num, izq, med, der, res;

    cin >> n >> m;

    vector<int> a(n);

    for(int i =0; i <n;i++){
        cin >> a[i];
    }

    sort(a.begin(), a.end());


    while(m-- > 0){
        cin >> num;
        izq = 0;
        der = a.size()-1;
        res = -1;
        while(izq <= der){
            med = (izq + der)/2;
            if(a[med] <= num){
                res = med;
                izq = med+1; 
            } else{
                der = med-1;
            }
        }
        cout << (res+1) << ' ';
    }

    return 0;
}
