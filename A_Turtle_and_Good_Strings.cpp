#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 1e9+7;





void solve() {
    ll n;
    cin >> n;
    string s;
    cin >> s;
    if(s[0]!=s[n-1]){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }


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