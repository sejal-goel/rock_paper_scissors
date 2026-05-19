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
for(int i=0;i<n;i++){
    cin >> b[i];
}
vi a;
a.push_back(b[0]);
for(int i=1;i<n;i++){
    if(b[i]>=b[i-1]){
        a.push_back(b[i]);
    }else{
        a.push_back(b[i]);
        a.push_back(b[i]);
    }
}
cout << a.size() << endl;
for(int i=0;i<a.size();i++){
    cout << a[i] << " ";
}
cout << endl;

}
signed main(){
    int t ;
    cin >> t ;
    // t=1;
    while (t--){
        solve();
    }
}