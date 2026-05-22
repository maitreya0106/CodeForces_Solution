
#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll gcd(ll a, ll b) {
    while (b != 0) {
        ll temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}








void solve() {
    ll n;
    char c;
    cin >> n >> c;
    string s;
    cin >> s;
    s+=s;
    n*=2;
    ll lg = -1;
    ll ans = INT_MIN;
    for(ll i = n-1; i>=0; i--){
        if(s[i]=='g'){
            lg = i;
        }
        if(s[i]==c){
            ans = max(ans, lg - i);
        }
    }
    cout << ans << "\n";

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
