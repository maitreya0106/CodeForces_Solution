#include <bits/stdc++.h>
using namespace std;
#define ll long long



void solve(){
    ll n;
    cin >> n;
    string s(n, '0');;
    cin >> s;
    ll flag = 0;
    ll count = 0;
    ll temp = 0;
    for(int i = 0; i < n; i++) {
        if(s[i]=='.'){
            count++;
            flag++;
            if(flag>=3){
                temp=1;
            }
        }
        else{
            flag=0;
        }
       
        
    }
    if(temp==1){
        cout << 2 << endl;
    }
    else{
        cout << count << endl;
    }

    
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}