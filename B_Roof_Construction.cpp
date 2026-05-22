#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll gcd(ll a, ll b) {
    while (b != 0) {
        ll temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}





void solve() {
    ll n;
    cin >> n;
    n -= 1;
    ll msb = log2(n);
    ll num = pow(2,msb)-1;
    while(num>=0){
        cout << num << " ";
        num--;
    }
    num = pow(2,msb);
    while(num<=n){
        cout << num << " ";
        num++;
    }
    cout << endl;
    return;

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
