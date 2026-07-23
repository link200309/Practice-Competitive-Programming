#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;


void solve(){
    int N;
    while(cin >> N){
        vector<int> books(N);
        
        for(int &x : books) cin >> x;
        
        int money; cin >> money;

        sort(books.begin(), books.end());

        pair<int, int> bought = {0, 1e6};
        for(int i = 0; i < N; i++){
            
            if(books[i] > money) break;

            auto it = find(books.begin()+i, books.end(), money-books[i]);
            if(it != books.end()){
                int secondBook = *it;
                if((secondBook - books[i]) < (bought.second - bought.first)){
                    bought = {books[i], secondBook};
                }
            }
        }

        cout << "Peter should buy books whose prices are " << bought.first << " and " << bought.second <<"."<< endl << endl;
    } 
}

int main(){
    int T = 1;
    while(T--){solve();}
    return 0;
}
