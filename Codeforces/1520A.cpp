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
        ll n; cin >> n;
        string s; cin >> s;
        bool fg = true, vis[26]={false};
        char ch=s[0]-'A';
        vis[ch]=true;
        for(int i=1; i<s.size(); i++){
            char x = s[i]-'A';
            if(vis[x]&&x!=ch){
                fg = false;
                break;
            }
            vis[x] = true;
            ch = x;
        }
        if(fg) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}