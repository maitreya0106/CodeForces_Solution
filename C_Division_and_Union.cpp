#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 1e9+7;





void solve() {
    ll n;
    cin >> n;
    vector<vector<ll>> a(n);
    for(ll i=0; i<n; i++){
        ll l;
        ll r;
        cin >> l >> r;
        a[i]={l,r,i};
    }
    vector<ll>ans(n,0);
    sort(a.begin(),a.end());
    ll mx1 = -1;
    ll mx2 = -1;
    for(ll i=0; i<n; i++){
        if(a[i][0]>mx1&&a[i][0]>mx2){
            if(mx1>=mx2){
                mx1 = a[i][1];
                ans[a[i][2]]=1;
            }
            else{
                mx2 = a[i][1];
                ans[a[i][2]]=2;
            }
        }
        else if(a[i][0]>mx1){
            mx1 = a[i][1];
            ans[a[i][2]]=1;
        }
        else if(a[i][0]>mx2){
            mx2 = a[i][1];
            ans[a[i][2]]=2;
        }
        else{
            cout << -1 << endl;
            return;
        }
    }
    ll cnt1 = 0;
    for(ll i=0; i<n; i++){
        if(ans[i]==1)cnt1++;
    }
    if(cnt1==n) ans[0]=2;
    for(ll i=0; i<n; i++){
        cout << ans[i] << ' ';
    }
    cout << endl;

}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
   
    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}