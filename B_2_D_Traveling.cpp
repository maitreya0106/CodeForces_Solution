#include <bits/stdc++.h>
using namespace std;
#define ll long long



int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll T;
    cin >> T;
    while (T--) {
        ll n, k, a, b;
        cin >> n >> k >> a >> b;
        vector<pair<ll,ll>> citi(n);
        for(ll i=0; i<n; i++){
            cin >> citi[i].first >> citi[i].second;
        }
        if(a<=k&&b<=k){
            cout << 0 << endl;
            
        }
        
        else if(a<=k||b<=k){
            if(a<=k){
                ll dist = LLONG_MAX;
                for(ll i=0; i<k; i++){
                    ll temp = abs(citi[b-1].first-citi[i].first)+abs(citi[b-1].second-citi[i].second);
                    dist = min(dist,temp);
                }
                cout << dist << endl;
            }
            else{
                ll dist = LLONG_MAX;
                for(ll i=0; i<k; i++){
                    ll temp = abs(citi[a-1].first-citi[i].first)+abs(citi[a-1].second-citi[i].second);
                    dist = min(dist,temp);
                }
                cout << dist << endl;
            }
        }
        else{
            ll dist1 = LLONG_MAX;
            for(ll i=0; i<k; i++){
                ll temp = abs(citi[a-1].first-citi[i].first)+abs(citi[a-1].second-citi[i].second);
                dist1 = min(dist1,temp);
            }
            ll dist2 = LLONG_MAX;
            for(ll i=0; i<k; i++){
                ll temp = abs(citi[b-1].first-citi[i].first)+abs(citi[b-1].second-citi[i].second);
                dist2 = min(dist2,temp);
            }
            ll dist = abs(citi[a-1].first-citi[b-1].first)+abs(citi[a-1].second-citi[b-1].second);
            if(k==0) cout << dist << endl;
            else cout <<  min(dist1+dist2,dist) << endl;
            
        }

        
    }

    return 0;
}
