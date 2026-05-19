#include <bits/stdc++.h>
using namespace std;
#define pyes cout << "YES" << endl;
#define pno cout << "NO" << endl;
#define ll long long int
#define vll vector <ll>
#define int long long 
#define vi vector <int>
#define map unordered_map<int,int>
#define fr(i, a, b) for (int i = (a); i < (int)(b); i++)

void input(vi &arr, int length){
    arr.resize(length);
    fr(i,0,length){
        cin >> arr[i];
    }
}

void solve(){
    int val=0;
vector <vector <char>> board(10 , vector <char> (10));
for(int i=0;i<10 ;i++){
    for(int j=0;j<10;j++){
        cin >> board[i][j];
        if(board[i][j]=='X'){
            val=val+1+ min({i , j ,9-i , 9-j });
        }
    }
}
cout << val << endl;


}
signed main(){
    int t ;
    cin >> t ;
    while (t--){
        solve();
    }
}