#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    unordered_map<char, int> freq;
    for (char c : s) {
        freq[c]++;
    }

    int odd_count = 0;
    for (auto &[c, f] : freq) {
        if (f % 2 != 0) {
            odd_count++;
        }
    }

    // If string length is even: all counts must be even
    // If string length is odd: only one odd count is allowed
    // So we must make at most (odd_count - 1) / 2 changes
    if (odd_count <= k + 1) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
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
