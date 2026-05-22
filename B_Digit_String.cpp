#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    string s;
    cin >> s;
    ll n = s.size();
    ll c4 = count(s.begin(),s.end(),'4');
    ll ans = c4;
    ll i=0;
    while((s[i]=='2'||s[i]=='4')&&i<n){
        i++;
    }
    ll c2 = 0;
    ll c13 = 0;
    

    
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