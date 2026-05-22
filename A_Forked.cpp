#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll dx[4] = {1,1,-1,-1};
    ll dy[4] = {1,-1,1,-1};
    ll a, b;
    cin >> a >> b;
    ll kx, ky;
    cin >> kx >> ky;
    ll qx, qy;
    cin >> qx >> qy;
    set<pair<ll,ll>> king,queen;
    for(int i=0; i<4; i++){
        king.insert({kx+a*dx[i], ky+b*dy[i]});
        king.insert({kx+b*dx[i], ky+a*dy[i]});
        queen.insert({qx+a*dx[i], qy+b*dy[i]});
        queen.insert({qx+b*dx[i], qy+a*dy[i]});
    }
    ll ans = 0;
    for(auto it: king){
        if(queen.find(it) != queen.end()){
            ans++;
        }
    }
    cout << ans << endl;
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
