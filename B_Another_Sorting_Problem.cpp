#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 1e9+7;

ll memo[40005][500];



void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(ll i=0; i<n; i++) cin >> a[i];
    ll mx = 0;
    for(ll i=0; i<n-1; i++){
        mx = max(mx,a[i]-a[i+1]);
    }
    for(ll i=1; i<n; i++){
        if(a[i]<a[i-1]){
            a[i]+=mx;
        }
    }
    bool sorted = true;
    for(ll i=1; i<n; i++){
        if(a[i]<a[i-1]){
            sorted = false;
            break;
        }
    }
    if(sorted){
        cout << "YES" << endl;
    }
    else cout << "NO" << endl;

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