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
int a, b, c, d ;
cin >> a >> b >> c >> d;
if(c-a > d -b ){
    cout << -1 << endl;
    return;
}else if(d<b){
    cout << -1 << endl;
    return;
}else {
    int ans=d-b;
    a=a+d-b;
    ans+= a-c;
    cout << ans << endl;
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