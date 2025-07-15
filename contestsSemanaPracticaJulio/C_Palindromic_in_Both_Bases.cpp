#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool esPalindromo(ll N){
    if(N < 10) return true;
    string Nstring = to_string(N);
    int tam = (int)log10(N) + 1;

    for(ll i = 0; i < tam/2; i++){
        if(Nstring[i] != Nstring[tam-i - 1]) return false;
    }
    return true;
}

string ConvertBase(ll A, ll N){
    if(N <= A) return to_string(N%A);
    string res = "";
    ll cos = N/A;
    res = res + to_string(N%A);

    while(cos != 0){
        res = res + to_string(cos % A);
        cos = cos/A; 

    }
    return res;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll A, N, sum = 0; cin >> A >> N;

    for(ll i = 1; i < N; i++){
        ll base = stoll (ConvertBase(A, i));
        if(esPalindromo(i) && esPalindromo(base)) sum += i;
    }


    cout << sum << "\n";


    return 0;
}
