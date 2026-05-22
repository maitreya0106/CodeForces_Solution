#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(ll i=0; i<n; i++) cin >> a[i];
    unordered_map<ll,vector<ll>> mp;
    ll tot = 0;
    for(ll i=0; i<n; i++){
        mp[a[i]].push_back(i+1);
        tot+=a[i];
    }
    vector<ll> ans;
    unordered_map<ll,ll> mp2;
    for(ll i=0; i<n; i++){
        if(mp2.find(a[i])==mp2.end()){

            ll num = tot-a[i]*2;
            if(num==a[i]){
                if(mp[a[i]].size()>1){
                    for(auto it: mp[a[i]]){
                        ans.push_back(it);
                    }
                }
            }
            else if(mp.find(num)!=mp.end()){

                for(auto it: mp[num]){
                    if(it==i+1) continue;
                    ans.push_back(it);
                }
            }
        }
        mp2[a[i]]++;
    }
    cout << ans.size() << endl;
    for(ll i=0; i<ans.size(); i++){
        cout << ans[i] << " ";
    }
    cout << endl;
    

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


        solve();
}