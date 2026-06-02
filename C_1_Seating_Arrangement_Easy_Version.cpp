#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n, x, s;
    cin >> n >> x >> s;
    
    ll emp = x;
    ll ae = 0; // Tracks Ambiverts acting as Extroverts
    ll par = 0;
    string st;
    cin >> st;
    
    ll ans = 0;
    
    for(auto ch: st){
        if (ch == 'I') {
            if (emp > 0) {
                emp--;
                par += s - 1;
                ans++;
            }
            // NO REGRET LOGIC HERE. If an I is blocked, they are gone forever.
        }
        else if (ch == 'E') {
            if (par > 0) {
                par--;
                ans++;
            }
            // REGRET E: If E is blocked, but an A previously took a partial seat, 
            // and we STILL have an empty table, we time-travel and tell A to open the table.
            else if (ae > 0 && emp > 0) {
                ae--;
                emp--;
                par += s - 1; // A opens the table, giving S-1 seats. E takes the old seat.
                ans++;
            }
        }
        else { // ch == 'A'
            if (par > 0) { // Always prefer saving empty tables
                par--;
                ae++;
                ans++;
            }
            else if (emp > 0) {
                emp--;
                par += s - 1;
                ans++;
            }
        }
    }
    cout << ans << "\n";
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