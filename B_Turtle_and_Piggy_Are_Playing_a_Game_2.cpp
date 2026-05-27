#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 1e9+7;





void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(ll i=0; i<n; i++) cin >> a[i];
    sort(a.begin(),a.end());
    cout << a[n/2] << endl;


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