#include <bits/stdc++.h>
using namespace std;
#define ll long long




void solve(){
    ll n, m ,q;
    cin >> n >> m >> q;
    vector<ll> tea(m);
    for(ll i=0; i<m; i++){
        cin >> tea[i];
    }
    sort(tea.begin(),tea.end());
    for(ll i=0; i<q; i++){
        ll x;
        cin >> x;
        auto it = upper_bound(tea.begin(),tea.end(),x);
        if(it==tea.end()){
            cout << n-tea[m-1] << endl;
            continue;
        }
        ll ind = it-tea.begin();
        if(ind==0){
            cout << tea[0]-1     << endl;
        }
        else{
            cout << (tea[ind]-tea[ind-1])/2 << endl;
        }

    }


}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--)
        solve();
}