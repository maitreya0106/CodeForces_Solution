#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n;
    cin >> n;
    vector<vector<ll>> adj(n+1);
    vector<ll> cnt(n+1,0);
    bool flag = true;
    for(ll i=0; i<n; i++){
        ll u, v;
        cin >> u >> v;
        cnt[u]++;
        cnt[v]++;
        if(cnt[u]>2||cnt[v]>2){
            flag = false;
        }
        if(u==v) flag = false;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    if(!flag){
        cout << "NO" << endl;
        return;
    }
    vector<ll> col(n+1,-1);
    for(ll i=1; i<=n; i++){
        if(col[i]==-1){
            queue<ll> q;
            q.push(i);
            col[i]=0;
            while(!q.empty()){
                ll u = q.front();
                q.pop();
                for(auto v: adj[u]){
                    if(col[v]==-1){
                        col[v]=1-col[u];
                        q.push(v);
                    }
                    else if(col[v]==col[u]){
                        cout << "NO" << endl;
                        return;
                    }
                }
            }
        }
    }
    cout << "YES" << endl;

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin >> t;
    while(t--) {
        solve();
    }
    
    return 0;
}
