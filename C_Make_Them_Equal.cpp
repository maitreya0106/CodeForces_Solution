#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve() {
    ll n;
    char c;
    cin >> n;
    cin >> c;
    string s;
    cin >> s;
    
    // Your initial setup is fine. It correctly identifies if all characters are already 'c'.
    ll count = 0;
    for(ll i=0; i<n; i++){
        if(s[i]!=c){
            count++;
        }
    }

    if(count == 0){
        cout << 0 << endl;
        return;
    }
    
    bool one_op_found = false;
    for (ll x = n; x > n / 2; --x) {
        if (s[x - 1] == c) {
            cout << 1 << endl;
            cout << x << endl;
            one_op_found = true;
            break;
        }
    }


    if (one_op_found) {
        return;
    }


    cout << 2 << endl;
    cout << n << " " << n - 1 << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}