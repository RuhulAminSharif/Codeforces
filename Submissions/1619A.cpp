#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t; cin >> t;
    while(t--){
        string s; cin >> s;
        if(s.size()&1){
            cout << "NO" << endl;
        }else{
            bool fg= true;
            for(int i=0; i<s.size()/2; i++){
                if(s[i]!=s[i+s.size()/2]){
                    fg = false;
                    break;
                }
            }
            if(fg) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
    return 0;
}