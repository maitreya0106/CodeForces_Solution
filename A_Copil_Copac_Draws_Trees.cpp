#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n;
    cin >> n;
    vector<vector<ll>> adj(n+1);
    vector<pair<ll,ll>> a(n-1);
    for(ll i=0; i<n-1; i++){
        ll u,v;
        cin >> u >> v;
        a[i].first = u;
        a[i].second = v;
        adj[u].push_back(v);
    }
    vector<ll> vis(n+1,0);
    ll ans = 0;
    queue<ll> q;
    for(ll i=0; i<n-1; i++){
        if(vis[a[i].first]==0){
            ans++;
            q.push(a[i].first);
            vis[a[i].first]=1;
            while(!q.empty()){
                ll num = q.front();
                q.pop();
                for(auto it: adj[num]){
                    if(vis[it]!=1){
                        vis[it]=1;
                        q.push(it);
                    }
                    
                }
            }
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