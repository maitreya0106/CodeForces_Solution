#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        int ans = 0;

        for (long long p = 1; p <= n; p *= 10) {
            for (int d = 1; d <= 9; ++d) {
                if (d * p <= n)
                    ans++;
            }
        }

        cout << ans << endl;
    }
}
