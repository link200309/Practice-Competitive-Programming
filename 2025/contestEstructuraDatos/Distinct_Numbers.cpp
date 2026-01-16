#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    cin >> n;
    vector<int> ve(n);

    for(int &x : ve) cin >> x;

    sort(ve.begin(), ve.end());

    auto it = unique(ve.begin(), ve.end());

    cout << distance(ve.begin(), it);

    return 0;
}
