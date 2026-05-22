#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n, x;
    cin >> n >> x;
    vector<ll> a(n);
    for(ll i=0; i<n; i++) cin >> a[i];
    ll l = 0;
    ll h = INT_MAX;
    ll ans = 0;
    while(l<=h){
        ll m = l+(h-l)/2;
        ll temp = 0;
        for(ll i=0; i<n; i++){
            if(m>a[i]) temp+=(m-a[i]);
        }
        if(temp>x){
            h = m-1;
        }
        else{
            ans = max(m,ans);
            l = m+1;
        }
    }
    cout << ans << endl;

    

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--)
        solve();
}