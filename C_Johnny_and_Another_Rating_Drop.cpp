#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n;
    cin >> n;
    ll pow = 1;
    ll ans = 0;
    for(ll i=0; i<=60; i++){
        ans+=n/pow;
        pow*=2;
    }
    cout << ans << endl;
    
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