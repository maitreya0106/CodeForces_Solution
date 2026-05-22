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
    ll i = n-1;
    while(i>=0 && a[i]==a[n-1]){
        i--;
    }
    if(i==-1){
        cout << 0 << endl;
        return;
    }
    ll ans = 0;
    while(i>=0){
        ans++;
        i -= (n-i-1);
        while(i>=0&&a[i]==a[n-1]){
            i--;
        }
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