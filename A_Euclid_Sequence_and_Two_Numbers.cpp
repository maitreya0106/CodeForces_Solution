#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 1e9+7;





void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(ll i=0; i<n; i++) cin >> a[i];
    sort(a.rbegin(),a.rend());
    bool flag = true;
    for(ll i=2; i<n; i++){
        if(a[i]!=(a[i-2]%a[i-1])){
            flag = false;
            break;
        }
    }
    if(!flag){
        cout << "-1\n";
        return;
    }
    cout << a[0] << ' ' << a[1] << endl;

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