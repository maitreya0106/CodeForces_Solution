#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n, x;
				cin >> n >> x;

				if (n == x) {

						cout << n << '\n';
						return;
				}

				ll ans = -1;
				for (int i = 0; i <= 61; i++) {

						if (((n >> i) << i) == x) {

								ll m = x | (1LL << i);
								ans = (m >= n) ? m : -1; 
								break; 
						}
				}

				cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin >> t;
    while(t--) {
        solve();
    }
    
    return 0;
}
