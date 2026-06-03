#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 1e9+7;

vector<vector<ll>> adj;


ll ans = 0;

ll dfs(ll u, ll p){
    ll sub = 1;
    for(auto it: adj[u]){
        if(it!=p){
            sub+=dfs(it,u);
        }
    }
    if(p!=0&&sub%2==0){
        ans++;
    }
    return sub;

}


void solve(){

    ll n;
    cin >> n;

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
    cout << ans << endl;

}



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   
    solve();
    return 0;
}