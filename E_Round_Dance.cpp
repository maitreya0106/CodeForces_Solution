#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 1e9+7;



void solve() {
    ll n;
    cin >> n;
    vector<pair<ll,ll>> a;
    ll maxv = 0;
    ll minv = 0;
    vector<ll> cnt(n,0);
    for(ll i=0; i<n; i++){
        ll x;
        cin >> x;
        x--;
        ll p = i;
        if(x<p) swap(p,x);
        a.push_back({p,x});
    }
    sort(a.begin(),a.end());
    a.erase(unique(a.begin(),a.end()),a.end());
    vector<vector<ll>> adj(n);
    for(auto it: a){
        adj[it.first].push_back(it.second);
        adj[it.second].push_back(it.first);
    }
    for(ll i=0 ;i<n; i++){
        cnt[i]=adj[i].size();
    }
    vector<ll> vis(n,0);
    queue<ll> q;
    
    ll complete_cycles = 0;
    ll open_components = 0;

    for(ll i=0; i<n; i++){
        if(!vis[i]){
            maxv++;
            q.push(i);
            vis[i]=1;
            
            bool is_cycle = true; 
            
            while(!q.empty()){
                ll num = q.front();
                q.pop();

                if(cnt[num] != 2) {
                    is_cycle = false;
                }
                
                for(auto it: adj[num]){
                    if(!vis[it]){
                        vis[it]=1;
                        q.push(it);
                    }
                }
            }
            
            if(is_cycle) complete_cycles++;
            else open_components++;
        }
    }

    minv = complete_cycles + (open_components > 0 ? 1 : 0);

    cout << minv << ' ' << maxv << "\n";

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
