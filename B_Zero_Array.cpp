#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(ll i=0; i<n; i++) cin >> a[i];
    ll mx = *max_element(a.begin(),a.end());
    ll sum = accumulate(a.begin(),a.end(),0LL);
    if(sum%2||mx>sum-mx){
        cout << "NO" << endl;
    }
    else cout << "YES" << endl;

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   
    solve();
    return 0;
}