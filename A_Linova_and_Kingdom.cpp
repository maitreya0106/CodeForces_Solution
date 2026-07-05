#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 1e9+7;





void solve() {
    ll n, k;
    cin >> n >> k;
    vector<vector<ll>> adj(n+1);
    for(ll i=0; i<n-1; i++){
        ll u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<ll> all;
    queue<pair<ll,ll>> q;
    q.push({1,0});
    vector<ll> vis(n+1,0);
    vis[1]=1;
    while(!q.empty()){
        ll u = q.front().first;
        ll dis = q.front().second;

        q.pop();

        for(auto v: adj[u]){
            if(!vis[v]){

                vis[v]=1;
                all.push_back(dis+1);
                q.push({v,dis+1});
            }
        }


    }
    sort(all.rbegin(),all.rend());
    ll ans = 0;
    for(ll i=0; i<k; i++) ans+=all[i];
    cout << ans << endl;


}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);


        solve();

    return 0;
}