#include <bits/stdc++.h>
using namespace std;
#define ll long long



void solve() {
    ll n;
    cin >> n;
    string s;
    cin >> s;
    string ans = "";
    for(char i='a'; i<='z'; i++){
        string temp;
        temp.push_back(i);
        if(s.find(temp)==string::npos){
            ans = temp;
            break;
        }
    }
    for(char i='a'; i<='z'; i++){
        for(char j='a'; j<='z'; j++){
            string temp;
            temp.push_back(i);
            temp.push_back(j);
            if(ans==""&&s.find(temp)==string::npos){
                ans = temp;
                break;
            }
        }
    }
    for(char i='a'; i<='z'; i++){
        for(char j='a'; j<='z'; j++){
            for(char k='a'; k<='z'; k++){
                string temp;
                temp.push_back(i);
                temp.push_back(j);
                temp.push_back(k);
                if(ans==""&&s.find(temp)==string::npos){
                    ans = temp;
                    break;
                }
            }
        }
    }
    cout << ans << endl;


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
