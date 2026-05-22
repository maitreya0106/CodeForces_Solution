
#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
void solve(){
    ll n;
    cin >> n;
    ll sum = 0;
    ll neg = 0;
    for(int i=0; i<n; i++){
        ll x;
        cin >> x;
        sum += x;
        if(x<0){
            neg++;
        }
    }
    if(sum>=0&&neg%2==0){
        cout << 0 << endl;
        return;
    }
    if(sum>=0&&neg%2!=0){
        cout << 1 << endl;
        return;
    }

    int cnt = 0;
    while(sum<0){
        sum+=2;
        cnt++;
    }
    if(cnt%2==0){
        if(neg%2==0){
            cout << cnt << endl;
        }
        else{
            cout << cnt+1 << endl;
        }
    }
    else{
        if(neg%2==0){
            cout << cnt+1 << endl;
        }
        else{
            cout << cnt << endl;
        }
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