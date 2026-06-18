#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    bool flag = true;
    for(ll i=0; i<n; i++){
        cin >> a[i];
        if(a[i]!=0) flag = false;
    }
    if(flag){
        cout << "No" << endl;
        return;
    }
    cout << "Yes" << endl;
    ll maxv = *max_element(a.begin(),a.end());
    ll minv = *min_element(a.begin(),a.end());
    ll dif = maxv-minv;
    vector<ll> pos, neg;
    for(ll i=0; i<n; i++){
        if(a[i]>=0) pos.push_back(a[i]);
        else neg.push_back(a[i]);
    }
    sort(pos.rbegin(),pos.rend());
    sort(neg.begin(),neg.end());
    ll temp = 0;
    ll u = 0;
    ll d = 0;
    vector<ll> ans;
    while(u<pos.size()){
        if(temp+pos[u]>=dif){
            temp+=neg[d];
            ans.push_back(neg[d]);
            d++;
        }
        else{
            temp+=pos[u];
            ans.push_back(pos[u]);
            u++;
        }  
    }
    while(d<neg.size()){
        ans.push_back(neg[d]);
        d++;
    }
    for(ll i=0; i<n; i++) cout << ans[i] <<' ';
    cout << endl;

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin >> t;
    while(t--) {
        solve();
    }
    
    return 0;
}