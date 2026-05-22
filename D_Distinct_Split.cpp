#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n;
    cin >> n;
    string s;
    cin >> s;
    set<char> front;
    vector<ll> fv(n,0);
    set<char> back;
    vector<ll> bv(n,0);
    for(ll i=0; i<n; i++){
        front.insert(s[i]);
        fv[i] = front.size();
    }
    for(ll i=n-1; i>=0; i--){
        back.insert(s[i]);
        bv[i] = back.size();
    }
    ll ans = 0;
    for(ll i=1; i<n; i++){
        ans = max(ans, fv[i-1] + bv[i]);
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
