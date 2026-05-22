#include<bits/stdc++.h>
using namespace std;
#define ll long long


const int MAXC = 100005;
vector<ll> mr[MAXC], mc[MAXC];

void solve() {
    ll n, m;
    cin >> n >> m;
    
    for(ll i = 0; i < n; i++){
        for(ll j = 0; j < m; j++){
            ll color;
            cin >> color;

            mr[color].push_back(i);
            mc[color].push_back(j);
        }
    }
    
    ll ans = 0;
    
    for(ll c = 1; c < MAXC; c++){
        if(mr[c].empty()) continue;
        

        sort(mr[c].rbegin(), mr[c].rend());
        sort(mc[c].rbegin(), mc[c].rend());
        
        ll s = mr[c].size();
        ll g = s - 1;
        

        for(ll i = 0; i < s; i++){
            ans += mr[c][i] * (g);
            ans += mc[c][i] * (g);
            g -= 2;
        }
    }
    
    cout << ans << '\n';
}

int main() {

    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    solve();
    
    return 0;
}