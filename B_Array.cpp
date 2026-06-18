#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 1e9+7;





void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(ll i=0; i<n; i++){
        cin >> a[i];
    }
    for(ll i=0; i<n; i++){
        ll gre = 0;
        ll les = 0;
        for(ll j=i+1; j<n; j++){
            if(a[i]>a[j]){
                les++;
            }
            else if(a[i]<a[j]) gre++;
        }
        cout << max(gre,les) << ' ';
    }
    cout << endl;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    ll t;
    cin >> t;
    while(t--){
        solve();
    }



    
    return 0;
}