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
int solve_dp(vector <int> &dp,vector <int > &a ,int tar){
    if(tar==0) return 0;
    if(tar<0) return LLONG_MAX;
    if(dp[tar]!=-1) return dp[tar];
    int mini=LLONG_MAX;
    for(int i=0;i<a.size();i++){
       int ans=solve_dp(dp,a,tar-a[i]);
        if(ans!=LLONG_MAX){
            mini=min(mini,1+ans);
        }
    }
    dp[tar]=mini;
    return mini;

}
void solve(){
    int n , x ;
    cin >> n >> x ;
    vi a(n);
    input(a,n);
    vector <int >dp(x+1,-1);
    dp[0]=0;
    int res=solve_dp(dp,a,x);
    cout << (res == LLONG_MAX ? -1 : res) << endl;
}
signed main(){
    int t ;
    cin >> t ;
    while (t--){
        solve();
    }
}