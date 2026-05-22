
#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
void solve(){
    ll n;
    cin >> n;
    vector<ll> a(n);
    for(ll i = 0; i < n; i++){
        cin >> a[i];
    }
    ll maxe = *max_element(a.begin(), a.end());
    vector<ll> b;
    vector<ll> c;
    for(ll i = 0; i < n; i++){
        if(a[i] != maxe){
            c.push_back(a[i]);
        }
        else{
            b.push_back(a[i]);
        }
    }
    if(c.size()==0){
        cout << -1 << endl;
        return;
    }
    cout << c.size() << " " << b.size() << endl;
    for(auto x : c){
        cout << x << " ";
    }
    cout << endl;
    for(auto x : b){
        cout << x << " ";
    }
    cout << endl;
    return;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}