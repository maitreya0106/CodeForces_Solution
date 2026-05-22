#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve() {
    ll n,k,x;
    cin >> n >> k >> x;
    vector<ll> a(n);

    for(ll i=0; i<n; i++) cin >>a[i];
    sort(a.begin(),a.end());
    vector<ll> temp;
    for(ll i=1; i<n; i++){
        ll diff = a[i]-a[i-1];
        if(diff<=x){
            continue;
        }
        else{
            temp.push_back(ceil((double)diff/(double)x)-1);
        }
    }
    sort(temp.begin(),temp.end());

    ll i = 0;
    while(i<temp.size()){
        if(k<temp[i]){
            break;
        }
        else{
            k-=temp[i];
            i++;
        }
    }
    cout << temp.size()-i+1 << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
        solve();
        
    return 0;
}
