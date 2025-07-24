#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

int invert(int num){
    if(num < 10) return num;
    string sNum = to_string(num);
    int tam = sNum.size();

    for(int i = 0; i < tam/2; i++){
        char f = sNum[i], l = sNum[tam-i-1];
        sNum[i] = l;
        sNum[tam-i-1] = f;
    }


    return stoi(sNum);
}

void solve(){
    int N; cin >> N;


    while(N--){
        int x, y; cin >> x >> y;

        cout << invert(invert(x) + invert(y)) << endl;
    }

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
