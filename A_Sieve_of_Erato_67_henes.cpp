#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool f(ll ind, vector<ll> &a, ll mul){

    if(mul==67){
        return true;;
    }
    if(ind==a.size()) return false;
    if(f(ind+1,a,mul*a[ind])) return true;
    if(f(ind+1,a,mul)) return true;
    return false;

}

void solve(){
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(ll i=0; i<n; i++) cin >> a[i];

    if(f(0,a,1)) cout << "YES" << endl;
    else cout << "NO" << endl;

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--)
        solve();
}