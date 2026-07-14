#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 1e9+7;





void solve() {
    ll n, k;
    cin >> n >> k;
    string a,b;
    cin >> a;
    cin >> b;
    string at = a;
    sort(at.begin(),at.end());
    at.erase(unique(at.begin(),at.end()), at.end());
    map<char,int> pos;
    ll it = 0;
    for(auto ch: at){
        pos[ch]=it;
        it++;
    }


    ll ans = 0;
    for(ll mask=0; mask<=(1<<at.size()); mask++){
        ll ones = __builtin_popcountll(mask);
        if(ones>k) continue;
        ll cnt = 0;
        ll temp = 0;
        for(ll i=0; i<n; i++){
            if(a[i]==b[i]||(1<<pos[a[i]]&mask)){
                temp++;
            }
            else{
                cnt += (temp*(temp+1))/2;
                temp=0;
            }
        }
        cnt += (temp*(temp+1))/2;
        ans = max(ans, cnt);
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