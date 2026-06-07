#include<bits/stdc++.h>
using namespace std;
#define ll long long


void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n),b(n);
    for(ll i=0; i<n; i++) cin >> a[i] >> b[i];
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    ll n1 = a.size();
    ll n2 = b.size();
    cout << (a[n1/2]-a[(n1-1)/2]+1)*(b[n2/2]-b[(n2-1)/2]+1) << endl;
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}