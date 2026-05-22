#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

#define ll long long

void solve() {
    int n;
    cin >> n;

    // A vector of pairs stores the value and its original index.
    vector<pair<ll, int>> a(n), b(n), c(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i].first;
        a[i].second = i;
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i].first;
        b[i].second = i;
    }
    for (int i = 0; i < n; i++) {
        cin >> c[i].first;
        c[i].second = i;
    }

    // Sort all vectors in descending order to get the largest elements first.
    sort(a.rbegin(), a.rend());
    sort(b.rbegin(), b.rend());
    sort(c.rbegin(), c.rend());

    ll max_sum = 0;

    // Iterate through the top 3 elements of each list.
    // The loop condition `i < n` handles cases where n < 3.
    // This is sufficient because any optimal combination will almost certainly
    // use one of the top few elements from each list.
    for (int i = 0; i < 3 && i < n; i++) {
        for (int j = 0; j < 3 && j < n; j++) {
            for (int k = 0; k < 3 && k < n; k++) {
                
                // Check if the original indices are all different.
                if (a[i].second != b[j].second &&
                    a[i].second != c[k].second &&
                    b[j].second != c[k].second) {
                    
                    // If indices are unique, this is a valid combination.
                    ll current_sum = a[i].first + b[j].first + c[k].first;
                    
                    // Update the overall maximum sum.
                    if (current_sum > max_sum) {
                        max_sum = current_sum;
                    }
                }
            }
        }
    }

    cout << max_sum << endl;
}

int main() {
    // Fast I/O
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}