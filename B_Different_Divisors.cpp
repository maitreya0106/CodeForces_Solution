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


ll next_prime(ll num){
    
    for(ll i = num; ; i++){
        bool isPrime = true;
        for(ll j=2; j*j<=i; j++){
            if(i%j==0){
                isPrime=false;
                break;
            }
        }
        if(isPrime){
            return i;
        }
    }
    
}


void solve() {
    ll n;
    cin >> n;
    ll p = next_prime(1+n);
    ll q = next_prime(p+n);
    cout << min(1LL*p*p*p,1LL*p*q)<< endl;
    
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
