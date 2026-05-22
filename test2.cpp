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
        vector<ll> a(n);
        for(ll i=0; i<n; i++) cin>>a[i];
        vector<ll> mark(n,0);
        ll pos = INT_MIN;
        for(ll i=0; i<n ;i++){
            if(a[i]>0){
                pos = max(a[i],pos);
            }
            else{
                if(abs(a[i])>pos){
                    pos = INT_MIN;
                }
                else {
                    mark[i]=1;                  
                }
            }
        }
        ll neg = INT_MIN;
        for(ll i=n-1; i>=0; i--){
            if(a[i]<0){
                neg = max(neg,abs(a[i]));
            }
            else{
                if(a[i]>neg){
                    neg = INT_MIN;
                }
                else{
                    mark[i]=1;
                }
            }
        }
        ll ans = count(mark.begin(),mark.end(),0);
        cout << ans << endl;
        for(ll i=0; i<n; i++){
            if(mark[i]==0){
                cout << a[i] << " ";
            }
        }
        cout << endl;
    }
    
    return 0;

}