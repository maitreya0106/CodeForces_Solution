#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n, m;
    cin >> n >> m;
    
    vector<vector<ll>> grid(n, vector<ll>(m));
    ll tot = 0;
    

    for(ll i = 0; i < n; i++) {
        for(ll j = 0; j < m; j++) {
            cin >> grid[i][j];
            if(grid[i][j] == 1) tot++;
        }
    }
    

    vector<vector<ll>> pre(n, vector<ll>(m, 0));
    for(ll i = 0; i < n; i++) {
        pre[i][m-1] = grid[i][m-1];
        for(ll j = m-2; j >= 0; j--) {
            pre[i][j] = pre[i][j+1] + grid[i][j];
        }
    }
    

    ll target = tot / 2;
    cout << target * (tot - target) << "\n";
    
    string s = "";
    ll r = 0, c = 0;
    

    while(r < n || c < m) {
        if (r == n) {

            s += 'R';
            c++;
        } else if (c == m) {

            s += 'D';
            r++;
        } else {

            if (pre[r][c] <= target) {
                s += 'D';
                target -= pre[r][c];
                r++;
            } else {

                s += 'R';
                c++;
            }
        }
    }
    
    cout << s << "\n";
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