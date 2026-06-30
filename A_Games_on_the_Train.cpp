#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 1e9+7;



void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(ll i=0; i<n; i++) cin >> a[i];
    cout << *max_element(a.begin(),a.end())-*min_element(a.begin(),a.end())+1 << endl;
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}