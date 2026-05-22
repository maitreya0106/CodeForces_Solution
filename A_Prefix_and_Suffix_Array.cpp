
#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
void solve(){
    ll n;
    cin >> n;
    vector<string> a(2);
    for(int i=0; i<2*n-2; i++){
        string s;
        cin >> s;
        if(s.size() == n-1){
            a.push_back(s);
        }
    }
    string s1 = a[0];
    string s2 = a[1];  
    reverse(s1.begin(), s1.end());
    if(s1==s2){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
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