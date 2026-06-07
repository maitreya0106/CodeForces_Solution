#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 1e9+7;





void solve() {
    ll n;
    cin >> n;
    vector<vector<ll>> a(n);
    for(ll i=0; i<n; i++){
        ll l;
        ll r;
        cin >> l >> r;
        a[i]={l,r,i};
    }
    vector<ll>ans(n,2);
    sort(a.begin(),a.end());
    ll maxr = a[0][1];

    bool flag = false;
    for(ll i=0; i<n; i++){
        if(a[i][0]>maxr){
            flag = true;
            break;
        }
        ans[a[i][2]]=1;
        maxr = max(a[i][1],maxr);
    }
    if(!flag){
        cout << "-1\n"; 
        return;
    }
    for(auto it: ans){
        cout << it << ' ';
    }
    cout << endl;

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