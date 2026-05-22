#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int u,d,l,r;
        cin >>l>>r>>d>>u;
        if(l==r&&l==d&&l==u){
            cout<<"Yes"<<endl;
        }
        else{
            cout << "No"<<endl;
        }
    }
    return 0;
}