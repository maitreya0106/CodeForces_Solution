#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 1e9+7;

vector<vector<ll>> adj;
vector<ll> vis;
vector<ll> mark;
ll cnt = 0;

void dfs(ll u, ll p){
    vis[u]=1;
    for(auto it: adj[u]){
        if(it!=p&&!vis[it]){
            vis[it]=1;
            dfs(it,u);
            if(!mark[u]&&!mark[it]){
                cnt++;
                mark[u]=1;
                mark[it]=1;
            }
        }

    }

}


void solve(){

    ll n;
    cin >> n;
    vis.assign(n+1,0);
    mark.assign(n+1,0);
    adj.resize(n+1);
    for(ll i=0; i<n-1; i++){
        ll u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    if(n%2){
        cout << -1 << endl;
        return;
    }
    dfs(1,0);
    ll pair = n/2;
  
    cout << cnt-1 << endl;

}



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   
    solve();
    return 0;
}