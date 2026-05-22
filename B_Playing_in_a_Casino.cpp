#include<bits/stdc++.h>
using namespace std;
#define ll long long




void solve() {
    ll n, m;
    cin >> n >> m;
    vector<vector<ll>>a(n,vector<ll>(m));
    for(ll i=0; i<n; i++){
        for(ll j=0; j<m; j++){
            cin >> a[i][j];
        }
    }
    ll ans = 0;
    for(ll i=0; i<m; i++){
        vector<ll> temp;
        for(ll j=0; j<n; j++){
            temp.push_back(a[j][i]);
        }
        sort(temp.begin(),temp.end());
        for(ll j=0; j<n; j++){
            ans-=temp[j]*(n-j-1);
            ans+=temp[j]*(j);
        }
    }
    cout << ans << endl;
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}