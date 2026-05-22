#include <bits/stdc++.h>
using namespace std;
#define ll long long




void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(ll i=0; i<n; i++) cin >> a[i];
    
    vector<ll> even(n,0);
    vector<ll> odd(n,0);
    map<ll,int> map;
    even[0]=a[0];
    map[odd[0]-even[0]]++;
    int flag = 0;
    for(ll i=1; i<n; i++){
        even[i]+=even[i-1];
        odd[i]+=odd[i-1];
        if(i%2==0) even[i]+=a[i];
        else odd[i]+=a[i];
        map[odd[i]-even[i]]++;
        if(map[odd[i]-even[i]]==2||odd[i]-even[i]==0){
            flag = 1;
            break;
        }
    }
    if(flag) cout << "YES" << endl;
    else cout << "NO" << endl;
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
