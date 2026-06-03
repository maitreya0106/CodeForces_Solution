#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 1e9+7;

vector<vector<ll>> adj;
vector<ll> vis;
ll s = 0;

ll powm(ll x, ll n){
    x%=MOD;
    if(n==0) return 1;
    if(n==1) return x;

    int p = powm(x*x,n/2);
    if(n%2) return p*x%MOD;
    else return p;
}

void dfs(ll u){
    vis[u]=1;
    s++;
    for(auto it: adj[u]){
        if(!vis[it]) dfs(it);
    }
}

void solve() {
    ll n,k;
    cin >> n >> k;
    vis.assign(n+1,0);
    adj.resize(n+1);
    for(ll i=0; i<n; i++){
        ll u, v , x;
        cin >> u >> v >> x;
        if(x==0){
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
    }
    ll ans = 0;
    for(ll i=1; i<=n; i++){
        if(!vis[i]){
            s = 0;
            dfs(i);
            ans = (ans+powm(s,k))%MOD;
        }
    }
    ans = (powm(n,k)-ans+MOD)%MOD;
    cout << ans << endl;

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   
    solve();
    return 0;
}