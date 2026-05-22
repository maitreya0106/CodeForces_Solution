#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n, m;
    cin >> n >> m;

    unordered_map<ll,ll>mp;
    for(ll i=0; i<m; i++){
        ll x;
        ll y;
        cin >> x >> y;
        if(x<y) swap(x,y);
        mp[x]=max(mp[x],y);
    }


    ll ans = 0;
    ll cur = -1;
    ll j=0;
    for(ll i=1; i<=n; i++){
        if(mp.find(i)!=mp.end()){

            cur = max(mp[i],cur);
            ans+=i-cur;

        }
        else if(cur==-1){
            ans+=i;
        }
        else{
            ans+=i-cur;
        }

    }
    cout << ans << endl;
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