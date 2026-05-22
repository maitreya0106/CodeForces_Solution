#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'



void solve() {
    string s,t;
    cin >> s >> t;
    vector<int> freq(26, 0);
    for(char c : t) {
        freq[c - 'A']++;
    }
    for(ll i=s.size()-1; i>=0; i--) {
        if(freq[s[i] - 'A'] > 0) {
            freq[s[i] - 'A']--;
        }
        else{
            s[i]='.';
        }
    }
    string empty = "";
    for(ll i=0; i<s.size(); i++) {
        if(s[i] != '.') {
            empty+=s[i];
        }
    }
    if(empty == t) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return; 

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
