#include <bits/stdc++.h>
using namespace std;
#define ll long long


#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n;
    cin >> n; // FIXED: Actually read n before using it
    
    vector<ll> a(n);
    for(ll i = 0; i < n; i++) cin >> a[i];
    

    vector<ll> ans;
    ans.push_back(a[0]);
    for(ll i=1; i<n-1; i++){
        if((1LL*a[i]-a[i-1])*(1LL*a[i+1]-a[i])<0){
            ans.push_back(a[i]);
        }
    }
    ans.push_back(a[n-1]);
    cout << ans.size() << endl;
    for(ll i=0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while(t--){
        solve();
    }


}