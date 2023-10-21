#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t, k=0; cin >> t;
    while(t--){
        string s; cin >> s;
        bool fg = false;
        for(int i=0; i<3; i++){
            if(s[i]=='a' && i==0){
                fg = true;
            }
            if(s[i]=='b'&& i==1){
                fg = true;
            }
            if(s[i]=='c' && i==2){
                fg = true;
            }
        }
        if(fg) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}