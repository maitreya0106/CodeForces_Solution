#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<int> freq(n * n + 1, 0);
    int max_freq = 0;
    
    for (int i = 0; i < n * n; ++i) {
        int x;
        cin >> x;
        freq[x]++;
        if (freq[x] > max_freq) {
            max_freq = freq[x];
        }
    }
    
    if (max_freq <= n * n - n) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
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