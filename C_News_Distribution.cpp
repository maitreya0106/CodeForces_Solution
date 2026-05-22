#include<bits/stdc++.h>
using namespace std;
#define ll long long

class DSU{
    
    public:
    vector<int> par,rank;
        DSU(int n){
            par.resize(n+1);
            rank.resize(n+1,0);
            for(ll i=0; i<=n; i++){
                par[i]=i;
            }
        }
        ll findPar(ll node){
            if(node==par[node]) return node;
            return par[node]=findPar(par[node]);
        }
        void uni(ll u, ll v){
            ll pu = findPar(u);
            ll pv = findPar(v);
            if(pu==pv) return;
            if(rank[pu]<rank[pv]){
                par[pu] = pv;
            }
            else{
                par[pv] = pu;
                rank[pu]++;
            }
        }
};

void solve() {
    ll n;
    cin >> n;
    ll m;
    cin >> m;
    DSU ds(n);
    for(ll i=0; i<m; i++){
        ll k;
        cin >> k;
        
        vector<ll> temp(k);
        for(ll j=0; j<k; j++) cin >> temp[j];
        if(k==0||k==1) continue;
        for(ll j=1; j<k; j++){
            ds.uni(temp[0],temp[j]);
        }
    }

    vector<ll> freq(n + 1, 0);

    // 1. Tally up how many nodes belong to each ultimate parent
    for(ll i = 1; i <= n; i++){
        freq[ds.findPar(i)]++; 
    }

    // 2. The answer for node 'i' is just the frequency of its ultimate parent
    for(ll i = 1; i <= n; i++){
        cout << freq[ds.findPar(i)] << (i == n ? "" : " ");
    }
    cout << "\n";
    

    
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
        solve();
    
    return 0;
}