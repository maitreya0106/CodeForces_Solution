#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(ll i=0; i<n; i++) cin >> a[i];
    ll ind = 0;
    ll max_v = a[0];
    for(ll i=1; i<n; i++){
        if(a[i]>max_v){
            ind=i;
            max_v = a[i];
        }
    }
    swap(a[0],a[ind]);
    for(ll i=0; i<n; i++){
        cout << a[i] << " ";
    }
    cout << endl;


}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--)
        solve();
}