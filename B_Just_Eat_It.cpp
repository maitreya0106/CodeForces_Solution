#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 998244353

void solve(){
    ll n;
    cin >> n;
    vector<ll> a(n);
    ll tot = 0;
    for(ll i=0; i<n; i++){
        ll x;
        cin >> x;
        tot+=x;
        a[i]=x;
    }
    ll ans = INT_MIN;
    ll temp = 0;
    for(ll i=1; i<n; i++){
        temp+=a[i];
        if(temp<0){
            temp=0;
        }
        ans = max(ans,temp);
    }
    temp = 0;
    for(ll i=0; i<n-1; i++){
        temp+=a[i];
        if(temp<0){
            temp=0;
        }
        ans = max(ans,temp);
    }
    if(tot>ans){
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;



}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while(t--){
        solve();
    }


}