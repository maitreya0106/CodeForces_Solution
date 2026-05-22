#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int MOD = 1e9+7;
void solve() {
    ll n, k;
    cin >> n >> k;
    ll ans = 1;
    for(ll i=0; i<k; i++){
        ans = (ans*n)%MOD;
    }
    cout << ans << endl;
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}