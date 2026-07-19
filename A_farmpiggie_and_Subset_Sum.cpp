#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n;
    cin >> n;
    ll odd = 1;
    ll even = 2;
    for(ll i=1; i<=n; i++){
        if(i%2){
            cout << even << ' ';
            even+=2;
        }
        else{
            cout << odd << ' ';
            odd+=2;
        }
    }
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin >> t;
    while(t--) {
        solve();
    }
    
    return 0;
}
