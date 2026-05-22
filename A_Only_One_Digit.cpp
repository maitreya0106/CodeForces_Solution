#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll ans = INT_MAX;
        while(n){
            ans = min(ans,n%10);
            n/=10;
        }
        cout << ans << endl;
    }
    

}