#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll gcd(ll a, ll b){
    return b==0?a:gcd(b,a%b);
}


void solve() {
    ll n, x, y;
    cin >> n >> x >> y;

    ll lcm_xy = (x / gcd(x, y)) * y;

    ll com = n / lcm_xy;
    

    ll a = (n / x) - com;
    ll b = (n / y) - com;

    ll left_sum = a * (n + (n - a + 1)) / 2;
    

    ll right_sum = b * (1 + b) / 2;
    
    cout << left_sum - right_sum << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}