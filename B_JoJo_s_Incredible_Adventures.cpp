#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        string s;
        cin >> s;

        int n = s.size();
        s += s;  // simulate circularity

        int max_ones = 0, count = 0;
        for (char c : s) {
            if (c == '1') count++;
            else {
                max_ones = max(max_ones, count);
                count = 0;
            }
        }
        max_ones = max(max_ones, count);

        if (max_ones >= n) {
            cout << 1LL*n * n << '\n';  // full matrix of 1s
        } else {
            // Try all possible rectangle heights from 1 to max_ones
            ll res = 0;
            for (int h = 1; h <= max_ones; h++) {
                res = max(res, 1LL * h * (max_ones - h + 1));
            }
            cout << res << '\n';
        }
    }

    return 0;
}
