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
    int v1=0, v2=0,cnt=0 ;
    bool flag=0;
    unordered_map <int,int > vals;
    for(int i=0;i<n;i++){
        cin >> a[i];
        if(i==0 ){
            v1=a[0];
        }
        else if(a[0]!=a[i] && cnt==0){
            v2=a[i];
            cnt=1;
        }else if (a[i]!=v1 && a[i]!=v2 ){
            flag=1;
        }

        if(a[i]==v1){
            vals[v1]++;
        }else if(a[i]==v2){
            vals[v2]++;
        }
    }
    if(n==2){
        pyes; return ;
    }
    if(vals[v1]==n){
        pyes;
        return;
    }
    else if(flag){
        pno; return ;
    }else if(vals[v1]==vals[v2] && (n%2==0)){
        pyes; return ;
    }else if( abs(vals[v1]-vals[v2])==1 && (n%2)){
        pyes;
        return;
    }else{
        pno; return ;
    }




}
signed main(){
    int t ;
    cin >> t ;
    while (t--){
        solve();
    }
}