#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {
    ll n;
    cin >> n;
    string s;
    cin >> s;
    stack<char> st;
    ll i=0;
    while(i<n){
        if(i!=n-1&&s[i]==s[i+1]){
            i+=2;
        }
        else{
            if(!st.empty()&&st.top()==s[i]){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
            i++;
            
        }
    }
    if(st.empty()){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
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