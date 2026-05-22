#include <bits/stdc++.h>
using namespace std;
#define ll long long



int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll T;
    cin >> T;
    while (T--) {
        ll n ,c;
        cin >> n >> c;
        vector<ll> a(n);
        for(ll i=0; i<n; i++) cin >> a[i];
        ll l = 1;
        ll r = 1e9;
        ll ans = -1;
        while(l<=r){
            ll mid = l+(r-l)/2;
            ll sum = 0;
            for(ll i=0; i<n; i++){
                sum+= (a[i]+2*mid)*(a[i]+2*mid);
                if(sum>c) break;
            }
            if(sum<=c){
                ans = mid;
                l = mid+1;
            }
            else{
                r = mid-1;
            }
        }
        cout << ans << endl;

        
    }

    return 0;
}
