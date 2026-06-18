#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 1e9+7;




bool f(ll n){
    ll og = n;
    ll temp = 0;
    while(n>0){
        temp = temp*10+n%10;
        n/=10;
    }
    return temp==og;
}

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
   
    int t;
    std::cin >> t;



    while (t--) {
        ll n;
        cin >> n;
        bool flag = false;
        for(ll rem = 0; rem<=n; rem++){
            if((n-rem)%12==0&&f(rem)){
                cout << rem << ' ' << n-rem << '\n';
                flag = true;
                break;
            }
        }
        if(!flag){
            cout << "-1\n";
        }
    }
    return 0;
}