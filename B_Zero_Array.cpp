#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n;
    cin >> n;
    map<ll,ll> mp;
    for(ll i=0; i<n; i++){
        ll x;
        cin >> x;
        mp[x]++;
    }
    vector<ll> a;
    for(auto it: mp){
        if(it.second%2){
            a.push_back(it.first);
        }
    }
    if(a.size()==0){
        cout << "YES" << endl;
        return;
    }
    if(a.size()==1){
        cout << "NO" << endl;
        return;
    }
    sort(a.begin(),a.end());
    ll sum = accumulate(a.begin(),a.end(),0);
    if(sum%2){
        cout << "NO" << endl;
        return;
    }
    ll tar = sum/2;
    bool f = false;
    ll temp=0;
    for(ll i=0; i<a.size(); i++){
        temp+=a[i];
        if(temp==tar){
            f = true;
            break;
        }
    }
    if(f){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   
    solve();
    return 0;
}