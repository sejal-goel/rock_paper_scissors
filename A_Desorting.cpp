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
vi a(n);
int diff=INT_MAX;
cin >> a[0];
for(int i=1;i<n;i++){
    cin >> a[i];
    if(a[i]<a[i-1]){diff=0;}
    else{
        diff=min(diff, abs(a[i]-a[i-1]+1));
    }
    
}
cout << (diff+1)/2 << endl;



}
signed main(){
    int t ;
    cin >> t ;
    // t=1;
    while (t--){
        solve();
    }
}