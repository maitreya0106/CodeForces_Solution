#include <iostream>
#include <string>
#include <vector>

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    // Vector to store the count of '1's for each modulo k group
    vector<int> count1(k, 0);
    
    // Count '1's in their respective groups
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            count1[i % k]++;
        }
    }

    // Check if any group has an odd number of '1's
    bool possible = true;
    for (int i = 0; i < k; i++) {
        if (count1[i] % 2 != 0) {
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
    // Optimize standard I/O operations for performance
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