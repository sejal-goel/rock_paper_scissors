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
int a, b,c ;
cin >> a >> b >>c  ;
if(a<=b){
    if(c>=b-a){
        c-=b-a;
        a=b;
    }else{
        a=a+c;
        c=0;
    }
}else{
    if(c>=a-b){
        c-=a-b;
        b=a;
    }else{
        b=b+c;
        c=0;
    }
}

if(a+(c%2)>b){
    cout << "First" << endl;
}
else{
    cout << "Second" << endl;
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