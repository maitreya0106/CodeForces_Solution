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
    for (ll i = 0; i < n; i++) cin >> a[i];

    // Case 1: Try for pattern Red, Blue, Red, ...
    // d must be a divisor of all even-indexed elements.
    ll d1 = a[0];
    for (ll i = 2; i < n; i += 2) {
        d1 = gcd(d1, a[i]);
    }

    // Check if d1 divides any odd-indexed elements.
    bool d1_is_valid = true;
    for (ll i = 1; i < n; i += 2) {
        if (a[i] % d1 == 0) {
            d1_is_valid = false;
            break;
        }
    }
    if (d1_is_valid) {
        cout << d1 << endl;
        return;
    }

    // Case 2: Try for pattern Blue, Red, Blue, ...
    // d must be a divisor of all odd-indexed elements.
    ll d2 = a[1];
    for (ll i = 3; i < n; i += 2) {
        d2 = gcd(d2, a[i]); // Correctly update d2
    }
    
    // Check if d2 divides any even-indexed elements.
    bool d2_is_valid = true;
    for (ll i = 0; i < n; i += 2) {
        if (a[i] % d2 == 0) {
            d2_is_valid = false;
            break;
        }
    }
    if (d2_is_valid) {
        cout << d2 << endl;
        return;
    }

    // If neither case worked, no solution exists.
    cout << 0 << endl;
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