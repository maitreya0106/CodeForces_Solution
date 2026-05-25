#include <bits/stdc++.h>
using namespace std;
#define ll long long




void solve(){
    ll n;
    cin >> n;
    ll x, y;
    cin >> x >> y;
    ll rem = min(x,y);
    cout << (n+rem-1)/rem << '\n';


}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--)
        solve();
}