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

bool isFair(ll n){
    ll num = n;
    while(num!=0){
        ll x = num%10;
        if(x!=0&&n%x!=0){
            return false;
        }
        num/=10;
    }
    return true;
}



void solve() {
    ll n;
    cin >> n;
    while(!isFair(n)){
        n+=1;
    }
    cout << n << "\n";
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
