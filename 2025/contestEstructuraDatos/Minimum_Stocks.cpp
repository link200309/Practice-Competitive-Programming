#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, acc, day;
    long long y, yBuy;
    unordered_map<string, long> ma;
    string x, xBuy;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> acc;

        if(acc == 1 || acc == 2){
            cin >> x >> y;
            ma[x] = y;
        } else {
            auto it = ma.begin();
            xBuy = it->first;
            yBuy = it->second;
            day = i+1;
            for(auto &par : ma){
                if(par.second < yBuy){
                    yBuy = par.second;
                    xBuy = par.first;
                }
            }
            cout << xBuy << ' ' << yBuy << '\n';
        }
    }

    return 0;
}
