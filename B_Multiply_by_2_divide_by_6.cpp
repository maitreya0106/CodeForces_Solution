#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n;
    cin >> n;
    ll c2 = 0;
    ll c3 = 0;
    while(n%3==0&&n>0){
        n /= 3;
        c3++;
    }
    while(n%2==0&&n>0){
        n /= 2;
        c2++;
    }
    if(c2>c3||n>1){
        cout << -1 << endl;
    }
    else{
        cout << c3 + (c3-c2) << endl;
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
