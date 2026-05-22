
#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
void solve(){
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(ll i=0; i<n; i++){
        cin >> a[i];
    }
    ll diff = INT_MAX;
    for(ll i=0; i<n-1; i++){
        if(a[i] > a[i+1]){
            cout << 0 << endl;
            return;
        }
        diff = min(diff, a[i+1]-a[i]);
    }
    cout << diff/2+1 << endl;
 
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}