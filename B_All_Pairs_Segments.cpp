#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n, q;
    cin >> n >> q;
    
    vector<ll> x(n);
    for(int i = 0; i < n; i++) {
        cin >> x[i];
    }
    

    map<ll, ll> mp;
    

    for(int i = 0; i < n; i++) {
        ll left_count = i + 1;
        ll right_count = n - i - 1;
        

        ll point_coverage = left_count * right_count + i;
        mp[point_coverage]++; 
        

        if (i < n - 1) {
            ll gap_length = x[i+1] - x[i] - 1;
            if (gap_length > 0) {
                ll gap_coverage = left_count * right_count;
                mp[gap_coverage] += gap_length; 
            }
        }
    }
    

    for(int i = 0; i < q; i++) {
        ll k;
        cin >> k;

        if (mp.find(k) != mp.end()) {
            cout << mp[k] << (i == q - 1 ? "" : " ");
        } else {
            cout << 0 << (i == q - 1 ? "" : " ");
        }
    }
    cout << "\n";
}

int main() {
    // Fast I/O
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