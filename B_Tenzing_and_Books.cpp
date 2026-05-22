#include <bits/stdc++.h>
using namespace std;
#define ll long long



int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll T;
    cin >> T;
    while (T--) {
        ll n, x;
        cin >> n >> x;
        vector<ll> s[3];
        for(int i=0; i<3; i++){
            ll temp = 0;
            s[i].push_back(temp);
            for(int j=0; j<n; j++){
                ll a;
                cin >> a;
                if((temp|a)!=temp){
                    temp = temp|a;
                    s[i].push_back(temp);
                    
                }
            }
        }
        bool ans = false;
        for(ll A: s[0]){
            for(ll B: s[1]){
                for(ll C: s[2]){
                    if((A|B|C)==x) ans = true;
                }
            }
        }
        cout << ((ans==1)?"YES":"NO") << endl;

        
    }

    return 0;
}
