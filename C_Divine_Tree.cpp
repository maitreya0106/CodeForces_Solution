#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n, m;
    cin >> n >> m;
    ll tot = (n*(n+1))/2;
    
    // FIXED: changed 'n > tot' to 'm > tot' and added the missing 'return;'
    if(m < n || m > tot){
        cout << -1 << "\n";
        return; 
    }
    
    // We start with a base sum of 'n' (if all nodes attached to 1)
    // 'req' is the extra sum we need to build up
    ll req = m - n; 
    
    vector<bool> vis(n+1, false);
    vis[1] = true; // Node 1 is always the base of our trunk
    vector<ll> a;
    
    // Greedily pick nodes to form a descending trunk
    for(ll i = n; i >= 2; i--){
        if(req >= (i - 1)){
            req -= (i - 1);
            vis[i] = true;
            a.push_back(i); // Add to our trunk
        }
    }

    // 1. Output the root (the largest number in our trunk, or 1 if empty)
    if(a.empty()){
        cout << 1 << "\n";
    } else {
        cout << a.front() << "\n";
    }
    
    // 2. Output the edges for the trunk (connecting them in a line)
    ll last = a.empty() ? 1 : a.front();
    for(size_t i = 1; i < a.size(); i++){
        cout << last << " " << a[i] << "\n";
        last = a[i];
    }
    
    // Connect the bottom of the trunk to 1
    if(!a.empty()){
        cout << last << " " << 1 << "\n";
    }
    
    // 3. Connect all remaining unused nodes to 1 (they will have divineness 1)
    for(ll i = 2; i <= n; i++){
        if(!vis[i]){
            cout << 1 << " " << i << "\n";
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t;
    if(cin >> t){
        while(t--){
            solve();
        }
    }
    return 0;
}