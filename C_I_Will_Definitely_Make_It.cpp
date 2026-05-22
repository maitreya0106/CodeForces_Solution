#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    ll t;
    cin >> t;
    while(t--){
        ll n,k;
        cin >> n;
        cin >> k;
        vector<ll> a(n);
        for(ll i = 0; i < n; i++) cin >> a[i];
        sort(a.begin(),a.end());
        ll height = a[k-1];
        ll ini = height;
        bool flag = false;
        for(ll i=0; i<n-1; i++){
            if(a[i]<i   ni){
                continue;
            }
            else{
                if(a[i+1]==a[i]) continue;
                else if(a[i+1]-a[i]>height){
                    flag = true;
                    break;
                }
                height+=a[i-1]-a[i];
            }
        }
        if(flag) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    
    return 0;

}