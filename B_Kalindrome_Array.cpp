#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll gcd(ll a, ll b){
    return (b==0)?a:gcd(b,a%b);
}

bool check(vector<ll> &a, ll x){
    vector<ll> temp;
    for(ll i=0; i<a.size(); i++){
        if(a[i]!=x){
            temp.push_back(a[i]);
        }
    }
    bool c = true;
    for(ll i=0; i<temp.size()/2; i++){
        if(temp[i]!=temp[temp.size()-i-1]){
            c = false;
            break; 
        }
    }
    return c;
}

void solve() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(ll i=0; i<n; i++) cin >> a[i];

    for(ll i=0; i<n/2; i++){
        if(a[i]!=a[n-i-1]){
            if(check(a,a[i])||check(a,a[n-1-i])){
                cout << "YES" << endl;
                return;
            }
            else{
                cout << "NO" << endl;
                return;
            }

        }
    }

    cout << "YES" << endl;

}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    int t;
    std::cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}