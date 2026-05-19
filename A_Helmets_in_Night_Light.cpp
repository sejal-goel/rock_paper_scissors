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

int n , p;
cin >> n >> p ;
vector <int > a(n), b(n);
for(int i=0;i<n;i++){
    cin >> a[i];
}
for(int i=0;i<n;i++){
    cin >> b[i];
}
vector <pair <int, int>> cost;
for(int i=0;i<n;i++){
    cost.push_back({b[i],a[i]});
}

sort(cost.begin(), cost.end());

if(cost[0].first>=p){
    cout << p*n << endl;
    // cout << "##1   $$" << endl;
}else{
    int sum=p;
    // cout << "##2   $$"  << sum << endl;
    int unn=n-1;
    int j=0;
    while(j<n && unn>0){
        int c=cost[j].first;
        int num=cost[j].second;
        if(c>=p){
            break;
        }
        j++;
        if(num>=unn){
        sum+=(c*unn);
        unn=0;
        break;
        }else{
        sum+=(c*num);
        unn=unn-num;
        }
    // cout << "##3   $$"  << sum << endl;
    }
    if(unn>0){
        sum+=unn*p;
    }
    // cout << "##4   $$"  << sum << endl;

    cout << sum << endl;
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