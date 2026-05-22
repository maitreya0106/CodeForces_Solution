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
    map<ll, ll> freq;
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
        freq[a[i]]++;
    }
    ll flag = 0;
    for(auto it: freq){
        if(it.second==1){
            flag = 1;
            break;
        }
    }
    if(flag){
        cout << -1 << endl;
        return;
    }
    ll l = 0;
    ll r = 0;
    vector<ll> s(n);
    for(ll i=0; i<n; i++){
        s[i]=i+1;
    }
    while(r<n){
        if(a[l]==a[r]){
            r++;
        }
        else{
            rotate(s.begin()+l,s.begin()+l+1,s.begin()+r);
            l=r;
        }
    }
    rotate(s.begin()+l, s.begin()+l+1, s.begin()+r);
    for(ll x : s){
        cout << x << " ";
    }
    cout << endl;
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
