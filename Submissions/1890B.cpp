#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t=1;
    cin >> t;
    for(ll test=1; test<=t; test++){
        // cout << "Case " << test << " : ";
        ll n, m; cin >> n >> m;
        string a, b; cin >> a >> b;
        bool fg=true;
        for(ll i=1; i<a.size(); i++){
            if(a[i]==a[i-1]){
                fg = false;
            }
        }
        if(fg){
            cout << "YES" << endl;
            continue;
        }
        fg = true;
        for(ll i=1; i<b.size(); i++){
            if(b[i]==b[i-1]){
                fg = false;
            }
        }
        if(!fg){
            cout << "NO" << endl;
            continue;
        }
        fg = true;
        for(ll i=1; i<a.size(); i++){
            if(a[i]==a[i-1]){
                if(a[i-1]==b[0] || a[i]==b.back()){
                    fg = false;
                }
            }
            if(!fg) break;
        }
        if(fg) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}