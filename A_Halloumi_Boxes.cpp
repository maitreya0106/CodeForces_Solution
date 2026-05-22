#include<bits/stdc++.h>
#include<vector>
using namespace std;



int main(){
    int t;
    cin >> t;
    while(t--){
        long long n, k;
        cin >> n >> k;
        vector<long long> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        vector<long long> copy = arr;
        sort(copy.begin(), copy.end());
        if(copy == arr || k>1){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }

    }
    return 0;
    
}