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

int n ;
cin >> n; 

int d=0;
int dum=n;
int l=0;
while(dum){
    d++;
    l=dum%10;
    dum=dum/10;
}
if(n<=10){
    cout << n <<  endl;
    return ;
}

int ans= 9 * (d-1);
ans+= l;
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