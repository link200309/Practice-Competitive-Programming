#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

bool check(ll middle, vector<int> &books, int k){
    ll localSuma = 0;
    for(int i = books.size()-1; i >= 0; i--){

        if(k == 0 || books[i] > middle) return false;

        if(localSuma+books[i] <= middle){
            localSuma += books[i];
        } else {
            localSuma = 0;
            k--;
            i++;
        }        
    }

    return k >= 0;
}

string format(vector<int> &books, int k, ll pagesMax){
    string res = "";
    ll localSuma = 0;
    for(int i = books.size()-1; i >= 0; i--){
        if((localSuma+books[i] <= pagesMax) && (i+1 >= k)){
            res = to_string(books[i]) + " " + res;
            localSuma += books[i];
        } else {
            res =  + "/ " + res;
            localSuma = 0;
            k--;
            i++;
        }
    }
    return res;
}

void solve(){
    int m, k; cin >> m >> k;
    vector<int> books(m);
    ll suma = 0;

    for(int &x : books) {cin >> x; suma += x;}

    
    ll left=books[0], right=suma, middle, pagesMax = 0;
    while(left <= right){
        middle = left + (right-left)/2;

        if(check(middle, books, k)){
            pagesMax = middle;
            right = middle - 1;
        } else {
            left = middle + 1;
        }
    }

    string res = format(books, k, pagesMax);
    
    cout << res << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T; cin >> T;
    while(T--){solve();}
    return 0;
}
