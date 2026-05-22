
#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
void solve(){
    string s;
    cin >> s;
    int ab=0;
    int ba=0;
    if(s.size()==1){
        cout << s << endl;
        return;
    }
    for(int i=0; i<s.size()-1; i++){
        if(s.substr(i,2)=="ab"){
            ab++;
        }
        else if(s.substr(i,2)=="ba"){
            ba++;
        }

    }
    if(ab==ba){
        cout << s << endl;
        return;

    }
    else if(ab>ba){
        s[s.size()-1]='a';
        cout << s << endl;
        return;
    }
    else if(ba>ab){
        s[s.size()-1]='b';
        cout << s << endl;
        return;
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