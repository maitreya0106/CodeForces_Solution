#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve(){
    ll n, m;
    cin >> n >> m;
    vector<ll> a(m,0);
    for(ll i=0; i<n; i++){
        ll x;
        cin >> x;
        a[x%m]++;
    }
    ll ans = 0;
    if(a[0]>0) ans++;
    for(ll i=1; i<=m/2; i++){
        ll x = a[i];
        ll y = a[m-i];
        if(x==0&&y==0) continue;
        else if(i==m-1) ans++;
        else{
            if(x==y) ans++;
            else{
                ans += max(1LL,llabs(x-y));
            }
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