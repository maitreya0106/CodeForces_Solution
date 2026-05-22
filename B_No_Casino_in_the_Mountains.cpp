#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        int ans = 0;
        for (int i = 0; i <= n - k; ) {
            bool canHike = true;
            for (int j = 0; j < k; j++) {
                if (a[i + j] == 1) {
                    canHike = false;
                    break;
                }
            }
            if (canHike) {
                ans++;
                i += k + 1;  // take hike and rest day
            } else {
                i++;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}
