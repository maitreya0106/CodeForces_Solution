#include <bits/stdc++.h>
using namespace std;
#define ll long long



void solve(){
    ll n;
    cin >> n;
    map<ll,ll> mp;
    for(int i=0; i < n; i++) {
        ll x;
        cin >> x;
        mp[x]++;
    }
    
    vector<ll> ans;
    for(auto it:mp){
        ans.push_back(it.second);
    }
    if(ans.size()>2){
        cout << "No" << endl;
        return;
    }
    if(n%2==1){
        if(ans[0]==n){
            cout << "Yes" << endl;
            return;
        }
        if(ans[0]==n/2&&ans[1]==(n/2)+1||ans[1]==n/2&&ans[0]==(n/2)+1){
            cout << "Yes" << endl;
            return;
        }
        cout << "No" << endl;
        return;
    }
    else{
        if(ans[0]==n){
            cout << "Yes" << endl;
            return;
        }
        if(ans[0]==n/2&&ans[1]==n/2){
            cout << "Yes" << endl;
            return;
        }
        
        cout << "No" << endl;
        return;
    }

    
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}