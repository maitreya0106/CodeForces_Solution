#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }


    map<ll, int> cnt1;

    map<ll, ll> cnt2;

    ll x = a[0];
    set<ll> s;
    ll c = 0;


    while (s.find(x) == s.end()) {
        cnt1[x]++;
        cnt2[x] += c;
        s.insert(x);
        
        if (x & 1) {
            x += 1;
        } else {
            x >>= 1;
        }
        c++;
    }


    for (int i = 1; i < n; i++) {
        x = a[i];
        s.clear(); 
        c = 0;
        
        while (s.find(x) == s.end()) {

            if (cnt1.count(x)) {
                cnt1[x]++;
                cnt2[x] += c;
            }
            s.insert(x);
            
            if (x & 1) {
                x += 1;
            } else {
                x >>= 1;
            }
            c++;
        }
    }

    ll ans = 1e18;
    

    for (auto const& [k, v] : cnt1) {
        if (v == n) {
            ans = min(ans, cnt2[k]);
        }
    }
    
    cout << ans << "\n";
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}