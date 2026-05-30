#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 1e9+7;





void solve() {
    ll n,m;
    cin >> n >> m;
    vector<ll> a(n);
    for(ll i=0; i<n; i++) cin >> a[i];
    ll maxv = 1;
    ll val = a[0];
    ll temp = 1;
    for(ll i=1; i<n; i++){
        if(a[i]==val){
            temp++;
        }
        else{
            maxv=max(maxv,temp);
            temp=1;
            val=a[i];
        }
    }
    maxv=max(maxv,temp);
    if(maxv>=m){
        cout << "NO" << endl;
    }else cout << "YES" << endl;

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