#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve() {
    ll n;
    cin >> n;
    if(n < 25) {
        cout << to_string(n).size() << endl;
        return;
    }
    ll temp = n;
    ll fir = -1;
    bool flag = false;
    ll l=0;
    while(temp){
        ll last = temp%10;
        temp/=10;
        if(last==0&&flag){
            fir = l-1;
            break;
        }
        else if(last==0){
            flag = true;

        }
        l++;
    }
    temp=n;
    l=0;
    ll sec = -1;
    flag = false;
    while(temp){
        ll last = temp%10;
        temp/=10;

        if(last==2&&flag){
            sec = l-1;
            break;
        }
        else if(last==5){
            flag = true;
        }
        l++;
    }
    temp=n;
    l=0;
    ll tir = -1;
    flag = false;
    while(temp){
        ll last = temp%10;
        temp/=10;
        if(last==0){
            flag = true;

        }
        else if(last==5&&flag){
            tir = l-1;
            break;

        }
        l++;
    }
    temp=n;
    l=0;
    ll fur = -1;
    flag = false;
    while(temp){
        ll last = temp%10;
        temp/=10;
        if(last==5){
            flag = true;

        }
        else if(last==7&&flag){
            fur = l-1;
            break;
        }
        l++;
    }
    if(fir==-1&&sec==-1&&tir==-1&&fur==-1){
        cout << to_string(n).size() << endl;
        return;
    }
    else{
        if(fir==-1){
            fir=INT_MAX;
        }
        if(sec==-1){
            sec=INT_MAX;
        }   
        if(tir==-1){
            tir=INT_MAX;
        }
        if(fur==-1){
            fur=INT_MAX;
        }
        ll ans = min({fir, sec, tir, fur});

        cout << ans << endl;
    }
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
