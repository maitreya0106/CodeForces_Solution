#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 1e9+7;





void solve() {
    ll n;
    cin >> n;
    string s;
    cin >> s;
    vector<ll> f(26,0);
    for(auto ch: s) f[ch-'a']++;
    string ans = "";
    while(ans.size()<n){
        for(ll i=0; i<26; i++){
            if(f[i]>0){
                ans+='a'+i;
                f[i]--;
            }
        }
    }
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