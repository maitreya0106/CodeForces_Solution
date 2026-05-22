#include <bits/stdc++.h>
using namespace std;
#define ll long long




void solve() {
    string s;
    cin >> s;
    sort(s.begin(),s.end());
    ll n = s.size();
    string ans(n,'.');
    vector<ll> freq(26,0);
    for(ll i=0; i<n; i++){
        freq[s[i]-'A']++;
    }
    ll maxv = INT_MIN;
    for(ll i=0; i<26; i++){
        maxv=max(maxv,freq[i]);
    }
    if(n%2==0){
        if(maxv>n/2){
            cout << -1 << endl;
            return;
        }
    }
    else{
        if(maxv>(n/2)+1){
            cout << -1 << endl;
            return;
        }
    }
    for(ll i=0; i<26; i++){
        ll temp = freq[i];
        ll j=0;
        while(temp){
            if(ans[j]=='.'){
                ans[j]='A'+i;
                temp--;
                j+=2;
            }
            else{
                j++;
            }
        }
    }
    cout << ans << endl;
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

        solve();
    
    return 0;
}
