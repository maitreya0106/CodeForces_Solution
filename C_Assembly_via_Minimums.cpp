#include <bits/stdc++.h>
using namespace std;
#define ll long long




void solve() {
    ll n;
    cin >> n;
    ll new_n = (n*(n-1))/2;
    vector<ll> b(new_n);
    for(ll i=0; i<new_n; i++){
        cin >> b[i];
    }
    sort(b.begin(),b.end(),greater<ll>());
    vector<ll> a;
    map<ll,ll> freq;
    for(auto it: b) freq[it]++;
    vector<ll> new_b;
    new_b.push_back(b[0]);
    for(ll i=1; i<new_n; i++){
        if(b[i]!=b[i-1]){
            new_b.push_back(b[i]);
        }
    }
    a.push_back(new_b[0]);
    ll temp = 1;
    for(ll i=0; i<new_b.size(); i++){
        while(freq[new_b[i]]>0){
            a.push_back(new_b[i]);
            freq[new_b[i]]-=temp;
            temp++;
        }
    }
    for(auto it:a){
        cout << it << " ";
    }
    cout << endl;

    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
