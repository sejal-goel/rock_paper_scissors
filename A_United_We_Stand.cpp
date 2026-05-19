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
vi a(n);
int ans=0 , curr=0;
for(int i=0;i<n;i++){
    cin >> a[i];
}
vi b, c;
sort(a.begin(),a.end());
for(int i=0;i<a.size();i++){
    if(a[i] &1){
        b.push_back(a[i]);
    }else{
        c.push_back(a[i]);
    }
}

if(b.size()==0){
    b=c;
    vi d;
    int l=b[b.size()-1];
    while(b[b.size()-1]==l){
    b.pop_back();
    d.push_back(l);
    }
    c=d;
    for(int i=0;i<b.size();i++){
        if(b[i]%c[0]==0){
            cout << "-1" << endl;
            return ;
        }
    }
    if(b.size()==0 || c.size()==0){
        cout << "-1" << endl;
        return ;
    }
}else if(c.size()==0){
    int l=b[b.size()-1];
    while(b[b.size()-1]==l){
    b.pop_back();
    c.push_back(l);
    }
    for(int i=0;i<b.size();i++){
        if(b[i]%c[0]==0){
            cout << "-1" << endl;
            return ;
        }
    }
    if(c.size()==0 ||b.size()==0){
        cout << "-1" << endl;
        return ;
    }
}

cout << b.size() << " " << c.size() << endl;
for(int i=0;i<b.size();i++){cout << b[i] << " ";} 
cout << endl;
for(int i=0;i<c.size();i++){cout << c[i] << " ";} 
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