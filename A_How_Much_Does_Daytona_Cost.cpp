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
     int n , m ;
     cin >> n >> m ;
      vi a(n);
      int flag=0;
      for(int i=0;i<n;i++){
        cin >> a[i];
        if(a[i]==m){
            flag=1;
            }
      }
      if(flag){
        pyes; return;
      }
      pno;


}
signed main(){
    int t ;
    cin >> t ;
    while (t--){
        solve();
    }
}