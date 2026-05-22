#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n,a,b;
    cin >> n >> a >> b;
    cout << ((n==a&&a==b)||(a+b+2<=n)?"Yes":"No") << endl;
    
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