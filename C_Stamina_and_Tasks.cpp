#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<double> c(n), p(n);
    for (int i = 0; i < n; ++i) {
        cin >> c[i] >> p[i];
    }
    
    double dp = 0.0;
    
    // Process tasks from right to left
    for (int i = n - 1; i >= 0; --i) {
        double skip_points = dp;
        double do_points = c[i] + (1.0 - p[i] / 100.0) * dp;
        
        dp = max(skip_points, do_points);
    }
    
    cout << fixed << setprecision(10) << dp << "\n";
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