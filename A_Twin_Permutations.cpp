
#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
void solve(){
    ll n;
    cin >> n;
    for(int i=0; i<n; i++){
        ll x;
        cin >> x;
        cout << n+1-x << " ";
    }
    cout << endl;
 
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}