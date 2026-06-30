#include <iostream>

using namespace std;
#define ll long long


ll get_emotes(ll k, ll m) {
    if (m <= k) {

        return (m * (m + 1)) / 2;
    } else {

        ll total_emotes = k * k;
        
        ll missed_messages = (2 * k - 1) - m;
        ll missed_emotes = (missed_messages * (missed_messages + 1)) / 2;
        
        return total_emotes - missed_emotes;
    }
}

void solve() {
    ll k, x;
    cin >> k >> x;
    
    ll l = 1;
    ll h = 2 * k - 1;
    ll ans = h;
    
    while (l <= h) {
        ll m = l + (h - l) / 2;
        

        if (get_emotes(k, m) >= x) {
            ans = m;       
            h = m - 1;     
        } 

        else {
            l = m + 1;     
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