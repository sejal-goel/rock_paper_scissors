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
    vi a(n-1);
    int sum=0;
    for(int i=0;i<n-1;i++){
        cin >> a[i];
        sum+=a[i];
    }
    cout << -1*sum << endl;
}
signed main(){
    int t ;
    cin >> t ;
    while (t--){
        solve();
    }
}