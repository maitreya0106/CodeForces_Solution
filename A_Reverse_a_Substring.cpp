#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll gcd(ll a, ll b) {
    while (b != 0) {
        ll temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}



void solve() {
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll flag = -1;
    for(int i=0; i<n-1; i++){
        if(s[i]>s[i+1]){
            flag = i;
            break;
        }
    }
    if(flag == -1){
        cout << "NO";
    }
    else{
        cout << "YES" << endl;
        cout << flag+1 << " " << flag+2 << endl; 
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
