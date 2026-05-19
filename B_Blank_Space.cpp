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
cin >> n; 
vi b(n);
int ans=0 , curr=0;
for(int i=0;i<n;i++){
    cin >> b[i];
    if(b[i]==0){
        curr++;
    }else{
        curr=0;
    }

    ans=max(ans , curr);
}
cout << ans << endl;

}
signed main(){
    int t ;
    cin >> t ;
    // t=1;
    while (t--){
        solve();
    }
}