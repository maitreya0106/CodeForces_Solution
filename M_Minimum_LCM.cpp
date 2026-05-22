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
    ll a = 1;
    ll b = n-1;
    for(ll i =2; i*i<=n; i++){
        if(n%i==0){
            a = n/i;
            b = n-a;
            break;

        }
    }
    cout << a << " " << b << endl;
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
