#include <bits/stdc++.h>
using namespace std;

bool isValid(int target, vector<int> &ve, int n, int M, vector<int> &res){
    int complement = 0;
    for(int i = 0; i < n-1; i++){
        if(ve[i] > M) continue;
        complement = M - ve[i];
        auto numberComplement = lower_bound(ve.begin() +i +1, ve.end(), complement);

        if((ve[i] + *numberComplement) == M && abs(ve[i] - *numberComplement) <= target){
            res[0] = ve[i];
            res[1] = *numberComplement;
            return true;
        }
    }
    return false;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;

    while(cin >> n){
        int M;
        vector<int> ve(n);
    
        for(int &x : ve) cin >> x;
        cin >> M;
        sort(ve.begin(), ve.end());
    
        long long left = 0, right = 2e6 + 2, medio;
        vector<int> res(2);
    
        while(left <= right){   
            medio = left + (right - left) / 2;
    
            if(isValid(medio, ve, n, M, res)){
                right = medio - 1;
            } else {
                left = medio + 1;
            }
        }
    
        cout << "Peter should buy books whose prices are " << res[0] << " and " << res[1] << ".\n\n";
    }

    return 0;
}
