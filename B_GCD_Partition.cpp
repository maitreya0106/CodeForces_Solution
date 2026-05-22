#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll gcd(ll a, ll b){
    return (b==0)?a:gcd(b,a%b);
}

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(ll i=0; i<n; i++) cin >> a[i];
    ll sum = accumulate(a.begin(),a.end(),0LL);
    ll temp = 0;
    ll ans = 0;
    for(ll i=0; i<n-1; i++){
        temp += a[i];
        sum -=a[i];
        ans = max(ans,gcd(temp,sum));
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