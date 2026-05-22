#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

#define ll long long

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    bool check = true;
    for(ll i=1; i<n; i++){
        if(a[i-1]>a[i]){
            check = false;
            break;
        }
    }
    if(check){
        cout << n << endl;
        return;
    }
    cout << 1 << endl;
    return;

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