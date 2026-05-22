
#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
void solve(){
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(ll i=0; i<n; i++){
        cin >> a[i];
    }
    vector<ll> b;
    b.push_back(a[0]);
    for(ll i=1; i<n; i++){
        if(a[i]>=a[i-1]){
            b.push_back(a[i]);
        }
        else{
            b.push_back(a[i]);
            b.push_back(a[i]);
        }

    }
    cout << b.size() << endl;
    for(ll i=0; i<b.size(); i++){
        cout << b[i] << " ";
    }
    cout << endl;


 
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}