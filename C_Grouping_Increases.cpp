#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(ll i = 0; i < n; i++) cin >> a[i];


    ll end1 = 1e18; 
    ll end2 = 1e18;
    ll penalty = 0;

    for(ll i = 0; i < n; i++) {
        // Trick: Always keep end1 as the smaller number to simplify our if-statements
        if (end1 > end2) {
            swap(end1, end2);
        }

        if (a[i] <= end1) {
            // Case 1: a[i] is smaller than BOTH. 
            // Greedily put it on the smaller one (end1) to save our large end2 for later.
            end1 = a[i];
        } 
        else if (a[i] <= end2) {
            // Case 2: a[i] is larger than end1, but smaller than end2. 
            // Put it on end2 to successfully avoid a penalty.
            end2 = a[i];
        } 
        else {
            // Case 3: a[i] is larger than BOTH. A penalty is inevitable.
            // Put it on the smaller one (end1) so we don't ruin our high-value end2 bound.
            end1 = a[i];
            penalty++;
        }
    }
    
    cout << penalty << "\n";
}

int main(){
    // Fast I/O
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t;
    if(cin >> t){
        while(t--){
            solve();
        }
    }
    return 0;
}