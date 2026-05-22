#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll gcd(ll a, ll b){
    return (b==0)?a:gcd(b,a%b);
}

void solve() {
    ll n;
    cin >> n; 
    vector<ll> a(n);
    for(ll i=0; i<n; i++) cin >> a[i];
    ll l = 0;
    ll r = n-1;
    ll ans = 0;
    ll sum_l = 0;
    ll sum_r = 0;
    while(l<r){
        if(sum_l+a[l]<sum_r+a[r]){
            sum_l += a[l];
            l++;
        }
        else if(sum_l+a[l]>sum_r+a[r]){
            sum_r += a[r];
            r--;
        }
        else{
            ans = l+1+n-r;
            sum_l+=a[l];
            sum_r+=a[r];
            l++;
            r--;
        }
    }
    cout << ans << endl;

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

