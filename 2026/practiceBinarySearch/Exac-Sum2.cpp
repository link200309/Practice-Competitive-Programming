#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;

pair<int, int> bought = {0, 1e6};

bool check(int middle, vector<int> &books, int money){
    for(int i = 0; i < books.size(); i++){
        int secondBook = money - books[i];
        auto it = lower_bound(books.begin()+i+1, books.end(), secondBook);

        if(it != books.end() && *it == secondBook){
            if(secondBook-books[i] <= middle) {
                bought = {books[i], secondBook};    
                return true;
            }
        }
    }
    return false;
}

void solve(){
    int N;
    while(cin >> N){
        vector<int> books(N);
        
        for(int &x : books) cin >> x;
        
        int money; cin >> money;

        sort(books.begin(), books.end());

        int left = 0, right = books[N-1]-books[0], middle;
        while(left <= right){
            middle = left + (right-left)/2;

            if(check(middle, books, money)){
                right = middle-1;
            } else {
                left = middle+1;
            }
        } 

        cout << "Peter should buy books whose prices are " << bought.first << " and " << bought.second <<"."<< endl << endl;
        bought = {0, 1e6};
    } 
}

int main(){
    int T = 1;
    while(T--){solve();}
    return 0;
}
