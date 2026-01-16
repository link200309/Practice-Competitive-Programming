#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define DBG(x) cerr << #x << " = " << (x) << " (line " << __LINE__ << ")" << endl;
#define DBG_ARR(arr) cerr << #arr << ": "; for (auto &_x : arr) cerr << _x << " "; cerr << endl;
const ll INF = 1e18; 
using namespace std;

void solve(){
    int n; cin >> n;
    unordered_map<char, int> cont;
    string s, t; cin >> s >> t;

    for(char car : t){
        size_t pos = s.find(car);

        if(pos == string::npos){
            cout << "NO" << endl;
            return;
        } else {
            s.erase(pos, 1);
        }
    }
    if(s.length() == 0)
        cout << "YES" << endl;
    else cout << "NO" << endl;
}

void init_code(){
        #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "r", stdout);
        freopen("debug.txt", "r", stderr);
        #endif
}

int main()
{
    // init_code();
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int T; cin >> T;
    while(T--){solve();}
    return 0;
}


//SOLUCION ALTERNATIVA

// author: khba
// #include <iostream>
// using namespace std;

// int cnt1[26], cnt2[26];

// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         for (int i = 0; i < 26; ++i) cnt1[i] = cnt2[i] = 0;

//         int n;
//         cin >> n;

//         string s, t;
//         cin >> s >> t;

//         for (char &c : s) cnt1[c - 'a']++;
//         for (char &c : t) cnt2[c - 'a']++;

//         bool answer = true;
//         for (int i = 0; i < 26; ++i)
//             if (cnt1[i] != cnt2[i])
//                 answer = false;

//         puts(answer ? "YES" : "NO");
//     }
// }




