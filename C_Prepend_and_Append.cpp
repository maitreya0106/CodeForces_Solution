
#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
void solve(){
    ll n;
    cin >> n;
    string s;
    cin >> s;



    int left = 0;
    int right = n-1;
    while(left<right && s[left] != s[right]){
        left++;
        right--;
        n-=2;
    }

    cout << n << endl;   

 
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}