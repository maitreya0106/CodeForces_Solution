#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll gcd(ll a, ll b){
    return (b==0)?a:gcd(b,a%b);
}

void solve() {
    ll n;
    cin >> n;
    ll mod = 1e9+7;
    ll ans = ((((n*(n+1))%mod)*(4*n-1))%mod*337)%mod;
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