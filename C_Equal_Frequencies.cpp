#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 1e9+7;





void solve() {
    ll n;
    cin >> n;
    string s;
    cin >> s;
    vector<pair<ll,char>> a(26);
    for(ll i=0; i<26; i++) a[i].second = 'a'+i;
    for(ll i=0; i<n; i++) a[s[i]-'a'].first++;
    sort(a.rbegin(),a.rend());
    ll bestk = 1;
    ll changes = n;
    for(ll k=1; k<=26; k++){
        if(n%k!=0) continue;
        ll tar = n/k;
        ll unchange = 0;
        for(ll i=0; i<k; i++) unchange+=min(a[i].first,tar);
        if(n-unchange<changes){
            bestk = k;
            changes = n-unchange;
        }
    }
    map<char,int> mp;
    for(int i=0; i<bestk; i++) mp[a[i].second] = n/bestk;
    string ans(n,' ');
    for(ll i=0; i<n; i++){
    if(mp[s[i]]>0){
        ans[i]=s[i];
        mp[s[i]]--;
    }
    }

    for(ll i=0; i<n; i++){
        if(ans[i]!=' ') continue;
        while(!mp.empty()&&(*mp.begin()).second==0) mp.erase(mp.begin());
        char c = (*mp.begin()).first;
        ans[i]=c;
        mp[c]--;
    }
    cout << changes << endl;
    cout << ans << endl;
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