#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll gcd(ll a, ll b){
    return (b==0)?a:gcd(b,a%b);
}

void solve() {
    string s;
    cin >> s;
    ll n = s.size();
    set<char> st;
    ll k = 0;
    for(k=0; k<n; k++){
        if(st.find(s[k])==st.end()){
            st.insert(s[k]);
        }
        else break;
    }
    for(ll i=k; i<n; i++){
        if(s[i]!=s[i-k]){
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
    return;

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