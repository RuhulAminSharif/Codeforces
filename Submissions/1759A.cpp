#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t=1LL;
    cin >> t;
    while(t--){
        string s; cin >> s;
        bool fg = true;
        for(ll i=0; i<s.size()-1; i++){
            if(s[i]=='Y'&& s[i+1]!='e') fg = false;
            else if(s[i]=='e'&& s[i+1]!='s') fg = false;
            else if(s[i]=='s'&& s[i+1]!='Y') fg = false;
            else if(s[i]!='Y' && s[i]!='e' && s[i]!='s') fg = false;
        }
        if(s.size()==1 && s[0]!='Y' && s[0]!='e' && s[0]!='s') fg = false;
        if(fg) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
