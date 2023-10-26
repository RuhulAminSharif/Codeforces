#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t=1; cin >> t;
    for(ll test=1; test<=t; test++){
        int n; string s; cin  >> n >> s;
        bool fg = false;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='8'){
                if(n-i>=11){
                    fg = true;
                    break;
                }
            }
        }
        if(fg) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}