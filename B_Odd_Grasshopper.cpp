
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
    ll a,b;
    cin >> a >> b;
    ll final = 0;   
    if(b%4==0){
        final = 0;
    }
    else if(b%4==1){
        final = -b;
    }
    else if(b%4==2){
        final = 1;
    }
    else if(b%4==3){
        final = b + 1;
    }
    if(a%2==0){
        cout << a+final << endl;
    }
    else{
        cout << a-final << endl;
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
