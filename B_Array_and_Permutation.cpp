#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    // pos array maps a value to its original index in the permutation 'p'
    // Size is n + 1 because values are 1-indexed (1 to n)
    vector<int> pos(n + 1);
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        pos[val] = i;
    }
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    bool possible = true;
    
    // Check if the original positions form a non-decreasing sequence
    for (int i = 0; i < n - 1; i++) {
        if (pos[a[i]] > pos[a[i+1]]) {
            possible = false;
            break;
        }
    }
    
    if (possible) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}