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
int n ;
cin >> n ;
vi a(n);
int ans=INT_MAX;
for(int i=0;i<n ;i++){
cin >> a[i];
if(a[i]==0){
    ans=0;
}else if (a[i] <0){
    ans=min(ans, -1*a[i]);
}else{
    ans=min(ans , a[i]);
}
}
cout << ans << endl;


}
signed main(){
    int t ;
    // cin >> t ;
    t=1;
    while (t--){
        solve();
    }
}