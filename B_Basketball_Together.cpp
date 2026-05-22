
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
    ll n,d;
    cin >> n >> d;
    vector<ll> a(n);
    for(ll i=0; i<n; i++){
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    ll left = -1;
    ll right = n-1;
    ll teamSize = 1;
    ll team = 0;
    while(left<right){
        if(a[right]*teamSize<=d&&left<right){
            left++;
            teamSize++;
        }
        else{
            team++;
            teamSize = 1;
            right--;
        }
    }
    cout << team << "\n";

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
        solve();
    
    return 0;
}
