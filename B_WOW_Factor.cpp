#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    string s;
    cin >> s;
    
    long long total_w = 0;
    int n = s.size();

    // Step 1: Count total 'W's (adjacent 'vv')
    for (int i = 1; i < n; i++) {
        if (s[i] == 'v' && s[i-1] == 'v') {
            total_w++;
        }
    }

    long long ans = 0;
    long long left_w = 0;

    // Step 2: Iterate and count WOWs using 'o' as a pivot
    for (int i = 1; i < n; i++) {
        if (s[i] == 'v' && s[i-1] == 'v') {
            left_w++; // We found a W on the left
        } else if (s[i] == 'o') {
            // Every 'o' completes (left_w * right_w) combinations
            long long right_w = total_w - left_w;
            ans += (left_w * right_w);
        }
    }

    cout << ans << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    
        solve();
}