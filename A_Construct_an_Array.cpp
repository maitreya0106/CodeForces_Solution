#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 1e9+7;

ll memo[40005][500];



void solve() {
    ll n;
    cin >> n;
    unordered_set<ll> st;
    ll s = 1;
    vector<ll> ans(n);
    ans[0]=s;
    for(ll i=1; i<n; i++){
        s++;
        if(st.find(s)!=st.end()){
            s++;
        }
        ans[i]=s;
        st.insert(ans[i]+ans[i-1]);
    }
    for(ll i=0;  i<n; i++){
        cout << ans[i] << ' ';
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