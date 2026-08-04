#include <bits/stdc++.h>
#define ll long long
#define endl '\n'

using namespace std;


int sumDivisors(int num){
    if(num <= 1) return 0;

    int sum = 1;
    for(int i = 2; i*i <= num; i++ ){
        if(num%i == 0){
            sum += i;
            sum += (num/i == i? 0 : num/i);
        } 
    }
    return sum;
}

void solve(){
    int n; cin >> n;

    while(n--){
        int num; cin >> num; 

        int sum = sumDivisors(num);

        string classification = "";

        if(sum == num) classification = "perfecto"; 
        else if(sumDivisors(sum) == num) {
            classification = sum > num? "romantico abundante" : "romantico";
        } 
        else if(sum > num) classification = "abundante"; 
        else classification = "complicado";

        cout << num << " " << classification << endl;
    }
}

int main(){
    solve();
    return 0;
}
