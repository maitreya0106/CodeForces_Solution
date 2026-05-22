#include <bits/stdc++.h>
using namespace std;
#define ll long long


ll gcd(ll a, ll b){
    if(b==0) return a;
    return gcd(b,a%b);
}


void solve() {
    ll n;
    cin >> n;
    if(n%2){
        cout << 0 << endl;
        return;
    }
    cout << n/4+1 << endl;


}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while(t--){
        solve();
    }


}