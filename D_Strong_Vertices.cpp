    #include <bits/stdc++.h>
    using namespace std;
    #define ll long long
    #define MOD 998244353
    void solve(){
        ll n;
        cin >> n;
        vector<ll> a(n);
        vector<ll> b(n);
        for(ll i=0; i<n; i++) cin >> a[i];
        long long max_v = INT_MIN;
        vector<ll> diff(n);
        for(ll i=0; i<n; i++){
            ll b;
            cin >> b;
            diff[i] = a[i]-b;
            if(diff[i]>max_v){
                max_v = diff[i];
            }
        }
        vector<ll> strong;
        for(ll i=0; i<n; i++){
            if(diff[i]==max_v){
                strong.push_back(i+1);
            }
        }
        cout << strong.size() << endl;
        for(int i=0; i<strong.size(); i++){
            cout << strong[i] << " ";
        }
        cout << endl;

    }

    int main(){
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        ll t;
        cin >> t;
        while(t--){
            solve();
        }


    }