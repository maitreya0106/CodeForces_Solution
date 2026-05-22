
#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
void solve(){
    ll n;
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    ll minv = a[0];
    ll maxv = a[n-1];
    if(minv==maxv){
        cout << "NO" << endl;
        return;
    }
    else{
        cout << "YES" << endl;
        cout << a[n-1] << " ";
        for(int i=0; i<n-1; i++){
            cout << a[i] << " ";
        }
        cout << endl;
    }

 
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}