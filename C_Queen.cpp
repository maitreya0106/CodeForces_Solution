#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n;
    cin >> n;
    vector<vector<ll>> adj(n+1);
    vector<ll> c(n+1, 0);
    
    for(ll i = 0; i < n; i++){
        ll par, ci;
        cin >> par >> ci;
        c[i+1] = ci;
        if(par == -1) continue;
        adj[par].push_back(i+1);
    }
    
    vector<ll> ans;
    
    for(ll i = 1; i <= n; i++){
        // We only care if the node itself doesn't respect its parent
        if(c[i] == 1){
            bool can_delete = true;
            
            // Check all of its children
            for(auto child : adj[i]){
                if(c[child] == 0){
                    can_delete = false; // A child respects this node, so we can't delete it
                    break;
                }
            }
            
            // If the loop finished and can_delete is still true, we push it.
            // (This also naturally handles nodes with 0 children)
            if(can_delete){
                ans.push_back(i);
            }
        }
    }
    
    // Output formatting
    if(ans.size() == 0){
        cout << -1;
    }
    else{
        for(ll i = 0; i < ans.size(); i++){
            cout << ans[i] << (i == ans.size() - 1 ? "" : " ");
        }
    }
    cout << "\n";
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    solve();
    
    return 0;
}