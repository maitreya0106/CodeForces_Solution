#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll gcd(ll a, ll b){
    if(b == 0){
        return a;
    }
    return gcd(b, a%b);
}

void solve(){
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(ll i=0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    ll test = gcd(a[0], a[1]);
    if(test <= 2){
        cout << "Yes" << endl;
        return;
    }
    cout << "No" << endl;

    
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}