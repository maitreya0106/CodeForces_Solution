#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n;
    cin >> n;
    vector<ll> arr(n);
    for(ll i=0; i<n; i++){
        cin >> arr[i];
    }
    vector<vector<ll>> dp = {{0,0},{0,1},{1,0},{1,1}};
    

}