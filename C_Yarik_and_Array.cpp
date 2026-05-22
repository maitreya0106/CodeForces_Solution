#include <bits/stdc++.h>
using namespace std;
#define ll long long



int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll T;
    cin >> T;
    while (T--) {
        ll n;
        cin >> n;
        vector<ll> a(n); 
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
        }
        ll i=0;
        ll j=0;
        ll sum = 0;
        ll ans = INT_MIN;
        while(j<n){
            if(sum<0){
                sum = 0;
                i=j;
            }
            if(i<j){
                if((a[j]^a[j-1])&1){
                    sum+=a[j];
                }
                else{
                    sum = a[j];
                    i=j;
                }
            }
            else{
                sum = a[j];
            }
            ans = max(sum,ans);
            j++;
        }
        cout << ans << endl;
    }

    return 0;
}
