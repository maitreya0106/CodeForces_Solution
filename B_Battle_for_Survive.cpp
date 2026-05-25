#include <bits/stdc++.h>
using namespace std;
#define ll long long




void solve(){
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(ll i=0; i<n; i++) cin >> a[i];
    ll sum = 0;
    for(ll i=0; i<n-2; i++) sum+=a[i];
    sum = a[n-2]-sum;
    cout << a[n-1]-sum << endl;

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--)
        solve();
}