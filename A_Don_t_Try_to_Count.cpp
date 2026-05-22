#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n,m;
        cin >> n >> m;
        string x(n, '0');
        string s(m, '0');
        for(int i = 0; i < n; i++) {
            cin >> x[i];
        }
        for(int i = 0; i < m; i++) {
            cin >> s[i];
        }
        int ans = 0;
        int flag = 0;
        if(n>m){
            int i = 2;
            while(i--){
                int res = x.find(s);
                if(res!=string::npos){
                    flag = 1;
                    break;
                }else{
                    ans++;
                    x.append(x);
                }
            }
    
        }
        while(x.size()<=s.size()*3){
            int res = x.find(s);
            if(res!=string::npos){
                flag = 1;
                break;
            }else{
                ans++;
                x.append(x);
            }
        }
        if(flag == 0){
            cout << -1 << endl;
        }
        else{
            cout << ans << endl;
        }

        
    }

    return 0;
}