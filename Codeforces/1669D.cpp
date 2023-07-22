#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
bool cmp(ll b, ll r)
{
    bool p = b==0 && r>0;
    bool q = r==0 && b>0;
    if(p || q) return false;
    else return true;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t; cin >> t;
    while(t--){
        bool fg = true;
        ll n; cin >> n;
        string s; cin >> s;
        ll b=0, r=0;
        for(ll i=0; i<s.size(); i++){
            if(s[i]=='R') r++;
            else if(s[i]=='B') b++;
            else{
                if(cmp(b,r)) b=0, r=0;
                else{
                    fg= false;
                    break;
                }
            }
        }
        fg = fg && cmp(b,r);
        if(fg) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}