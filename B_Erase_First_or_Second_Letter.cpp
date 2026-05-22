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
    cin >> n;
    string s;
    cin >> s;
    map<char,int> mp;
    ll cnt = 0;
    vector<ll> dis(n);
    for(ll i=0; i<n; i++){
        mp[s[i]]++;
        if(mp[s[i]]==1){
            cnt++;
        }
        dis[i]=cnt;
    }
    ll ans = 0;
    for(auto it: dis) ans+=it;
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
