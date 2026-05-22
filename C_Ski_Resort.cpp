\
#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll gcd(ll a, ll b) {
    while (b != 0) {
        ll temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}








void solve() {
    ll n,k,q;
    cin >> n >> k >> q;
    vector<ll> a(n);
    for(ll i = 0; i < n; i++) {
        cin >> a[i];
        a[i] = (a[i]>q)?0:1; // Convert to 1 if x > q, else 0
    }
    ll ways = 0;
    ll count = 0;
    for(ll i=0; i<n; i++){
        if(a[i]==1){
            count++;
        }
        else{
            if(count>=k){
                ll dif = count - k + 1; // Calculate the number of valid subarrays
                ways += (dif* (dif + 1)) / 2; // Sum of first dif natural numbers
            }
            count = 0;
        }

    }
    if(count>=k){
        ll dif = count - k + 1; // Calculate the number of valid subarrays
        ways += dif * (dif + 1) / 2; // Sum of first dif natural numbers
    }
    cout << ways << "\n";





    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
