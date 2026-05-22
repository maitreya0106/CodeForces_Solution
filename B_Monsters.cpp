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
    ll n,k;
    cin >> n >> k;
    vector<pair<ll, ll>> a(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i].first;
        a[i].second = i + 1; // Store the original index
    }
    for(auto &it: a){
        it.first = it.first % k;
        if(it.first == 0){
            it.first = k;
        }
    }
    sort(a.begin(),a.end(),[&](pair<ll,ll> &a, pair<ll,ll> &b){
        if(a.first!=b.first){
            return a.first>b.first;
        }
        return  a.second<b.second;
    });
    for(auto it: a){
        cout << it.second << " ";
    }
    cout << "\n";





    
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
