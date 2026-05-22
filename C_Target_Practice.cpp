#include <bits/stdc++.h>
using namespace std;
#define ll long long



void solve(){
    
    int tot = 0;
    for(int i = 1; i < 11; i++) {
        for(int j = 1; j < 11; j++) {
            char x;
            cin >> x;
            if(x=='X'){
                if(i==1 || i==10 || j==1 || j==10){
                    tot++;
                }
                else if(i==2 || i==9 || j==2 || j==9){
                    tot+=2;
                }
                else if(i==3 || i==8 || j==3 || j==8){
                    tot+=3;
                }
                else if(i==4 || i==7 || j==4 || j==7){
                    tot+=4;
                }
                else if(i==5 || i==6 || j==5 || j==6){
                    tot+=5;
                }
            }
        }
    }
    cout << tot << endl;
 

    
    
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