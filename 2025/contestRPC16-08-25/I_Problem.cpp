#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

void solve(){
    vector<int> d1(6), d2(6), d3(6), loss(3);
        for(int &x : d1) cin >> x;
        for(int &x : d2) cin >> x;
        for(int &x : d3) cin >> x;

    double vic12 = 0,vic13 = 0, vic23 = 0;
    double vic21 = 0,vic31 = 0, vic32 = 0;
    
    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 6; j++){
            if(d1[i] > d2[j]) vic12++;
            else if(d1[i] < d2[j]) vic21++;
            if(d1[i] > d3[j]) vic13++;
            else if(d1[i] < d3[j]) vic31++;
            if(d2[i] > d3[j]) vic23++;
            else if(d2[i] < d3[j]) vic32++;
        }
    }

    if(vic12/(vic12+vic21) >= 0.5 && vic13/(vic13+vic31) >= 0.5) cout << "1";
    else if(vic23/(vic23+vic32) >= 0.5 && (1-vic12/(vic12+vic21)) >= 0.5) cout << "2";
    else if((1-vic13/(vic13+vic31)) >= 0.5 && (1-vic23/(vic23+vic32)) >= 0.5) cout << "3";
    else cout << "No dice";

    cout << endl;
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int T = 1;
    while(T--){solve();}
    return 0;
}
