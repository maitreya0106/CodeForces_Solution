#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n, k, p, m;
    cin >> n >> k >> p >> m;
    vector<pair<ll,ll>> card(n,{0,0});
    for(ll i=0; i<n; i++){
        cin >> card[i].first;
        if(p-1==i){
            card[i].second = 1;
        }
    }
    ll ans = 0;
    ll lim = min(n,k);
    while(true){
        ll w = -1;
        ll min_v = INT_MAX;
        ll min_ind = -1;
        for(ll i=0; i<lim; i++){
            if(card[i].second==1){
                w = i;
                break;
            }
            if(card[i].first<min_v){
                min_v=card[i].first;
                min_ind = i;
            }
        }
        if(w!=-1){
            if(m<card[w].first) break;
            m-=card[w].first;
            ans++;
            ll temp = card[w].first;
            card.erase(card.begin()+w);
            card.push_back({temp,1});
        }
        else{
            if(m<card[min_ind].first){
                break;
            }
            m -= card[min_ind].first;
            ll temp = card[min_ind].first;
            card.erase(card.begin()+min_ind);
            card.push_back({temp,0});
        }

    }
    cout << ans << endl;

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--)
        solve();
}