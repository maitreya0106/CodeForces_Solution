#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    string s;
    cin >> s;
    ll c1 = 0;
    ll c0 = 0;
    for(char c:s){
        if(c == '1') {
            c1++;
        } else {
            c0++;
        }
    }
    ll ans = min(c1,c0);
    if(ans%2==0){
        cout << "NET" << endl;
    } else {
        cout << "DA" << endl;
    }
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
