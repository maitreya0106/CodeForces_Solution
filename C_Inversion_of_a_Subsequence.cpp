#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];
    
    int s1 = 0, s0 = 0, e1 = 0, e0 = 0;
    for(int i = 0; i < n; i++){
        if(a[i] != b[i]){
            if(a[i]) s1++; else s0++; // Mismatches
        } else {
            if(a[i]) e1++; else e0++; // Matches (Equals)
        }
    }
    
    if(s1 == 0 && s0 == 0) cout << 0 << "\n";
    else if(s1 % 2) cout << 1 << "\n";
    else if(s1 > 0 || (e1 > 0 && e0 > 0)) cout << 2 << "\n";
    else cout << -1 << "\n";
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
