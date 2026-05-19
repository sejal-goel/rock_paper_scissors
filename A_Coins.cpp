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
// #1783a
void input(vi &arr, int length){
    arr.resize(length);
    fr(i,0,length){
        cin >> arr[i];
    }
}

void solve(){
int n , k ;
cin >> n>>k ;
if(k==1){
    cout << "Yes" << endl;
    return ;
}else{
    if((n&1)==0){
    cout << "Yes" << endl;
    return ;
    }
    if((k&1)==0){
    cout << "No" << endl;
    return ;
    }
    if(n>=k){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}

}
signed main(){
    int t ;
    cin >> t ;
    // t=1;
    while (t--){
        solve();
    }
}