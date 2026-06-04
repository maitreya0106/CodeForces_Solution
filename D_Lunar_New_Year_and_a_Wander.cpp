#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 1e9+7;





void solve() {
    ll n,m;
    cin >> n >> m;
    vector<vector<ll>> adj(n+1);
    for(ll i=0; i<m; i++){
        ll u,v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<ll> vis(n+1,0);
    vector<ll> ans;
    vis[1]=1;
    priority_queue<ll,vector<ll>,greater<ll>> q;
    q.push(1);
    while(!q.empty()){
        ll num = q.top();
        q.pop();
        vis[num]=1;
        ans.push_back(num);
        for(auto v: adj[num]){
            if(!vis[v]){
                vis[v]=1;
                q.push(v);
            }
        }
    }
    for(ll i=0; i<ans.size(); i++){
        cout << ans[i] << ' ';
    }
    cout << endl;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

        solve();
    
    return 0;
}