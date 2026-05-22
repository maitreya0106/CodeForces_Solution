#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll gcd(ll a, ll b){
    return (b==0)?a:gcd(b,a%b);
}

void solve() {
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for(ll i=0; i<n; i++) cin >> a[i];
    map<ll,bool> mp;
    for(auto it: a){
        mp[it]=true;
    }
    for(ll i=0; i<n; i++){
        if(mp.find(a[i]-k)!=mp.end()){
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;

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