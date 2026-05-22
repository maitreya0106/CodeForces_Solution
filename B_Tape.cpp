#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n , m, k;
    cin >> n >> m >> k;
    vector<ll>a(n);
    for(ll i=0; i<n; i++) cin >> a[i];
    ll tot = a[n-1]-a[0]+1;
    vector<ll> dif;
    for(ll i=1; i<n; i++){
        dif.push_back(a[i]-a[i-1]-1);
    }
    sort(dif.rbegin(),dif.rend());
    for(ll i=0; i<k-1; i++){
        tot-=dif[i];
    }
    cout << tot << endl;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    solve();
    
    return 0;
}