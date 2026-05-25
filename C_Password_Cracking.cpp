#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n;
    cin >> n;
    string t = "";
    

    bool right_failed = false;
    

    while(t.size() < n){
        
        if(!right_failed) {

            cout << "? " << t + "0" << endl;
            ll x;
            cin >> x;
            if(x == 1){
                t += "0";
            }
            else {

                cout << "? " << t + "1" << endl;
                cin >> x;
                if(x == 1){
                    t += "1";
                }
                else {

                    right_failed = true;
                }
            }
        } 
        else {

            cout << "? " << "0" + t << endl;
            ll x;
            cin >> x;
            if(x == 1){
                t = "0" + t;
            }
            else {

                t = "1" + t;
            }
        }
    }
    

    cout << "! " << t << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}