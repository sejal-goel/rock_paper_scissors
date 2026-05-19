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

    int n , k , x;
    cin >> n >> k >> x ;
    if(n%2 && k==2 && x==1){
        pno; return;
     }else if(k==1 && x==1){
        pno; return ;
    }else{
        pyes;
        if(x!=k && x!=1){
            vi ans ;
            while(n-k>=0){
                ans.push_back(k);
                n=n-k;
            }
            if(n!=x && n!=0){
                ans.push_back(n);
            }else if(n!=0 && n!=1){
                if(x==n-1){
                ans.push_back(2);
                ans.push_back(n-2);
                }
                else{
                ans.push_back(1);
                ans.push_back(n-1);
                }

            }else if(n==1){
                ans.push_back(1);
            }
            cout << ans.size() << endl;
            for(int i=0;i<ans.size();i++){
                cout << ans[i] << " ";
            }
            cout << endl;
        }else if(x!=1){
            k=k-1;
            vi ans ;
            while(n-k>=0){
                ans.push_back(k);
                n=n-k;
            }
            if(n!=x && n!=0){
                ans.push_back(n);
            }else if(n!=0 && n!=1){
                if(x==n-1){
                ans.push_back(2);
                ans.push_back(n-2);
                }
                else{
                ans.push_back(1);
                ans.push_back(n-1);
                }
            }else if(n==1){
                ans.push_back(1);
            }
            cout << ans.size() << endl;
            for(int i=0;i<ans.size();i++){
                cout << ans[i] << " ";
            }
            cout << endl;
        }else{
            k=2;
            vi ans ;
            while(n-k>=0){
                ans.push_back(k);
                n=n-k;
            }
            if(n==1){
            ans.pop_back();
            ans.push_back(3);
            }
            cout << ans.size() << endl;
            for(int i=0;i<ans.size();i++){
                cout << ans[i] << " ";
            }
            cout << endl;

        }
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