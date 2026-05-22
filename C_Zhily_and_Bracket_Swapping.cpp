#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    
    int bal_a = 0, bal_b = 0;
    
    for(int i = 0; i < n; i++) {
        if(a[i] == b[i]) {
            // We are forced to apply the same bracket to both
            if(a[i] == '(') {
                bal_a++;
                bal_b++;
            } else {
                bal_a--;
                bal_b--;
            }
        } else {
            // We have one '(' and one ')'. 
            // Greedily give '(' to the sequence with the smaller balance to keep them safe.
            if(bal_a < bal_b) {
                bal_a++;
                bal_b--;
            } else {
                bal_a--;
                bal_b++;
            }
        }
        
        // If at any point either balance goes negative, it's an invalid sequence
        if(bal_a < 0 || bal_b < 0) {
            cout << "NO\n";
            return;
        }
    }
    
    // Both sequences must perfectly close all brackets at the end
    if(bal_a == 0 && bal_b == 0) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}