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
        string a, b; 
        for(ll i=0; i<n; i++){
            if(i%2){
                a += s[i];
            }else{
                b += s[i];
            }
        }
        bool fg = true;
        for(ll i=0; i<a.size(); i++){
            for(ll j=0; j<b.size(); j++){
                if(a[i]==b[j]){
                    fg = false;
                    break;
                }
            }
            if(!fg){
                break;
            }
        }
        if(fg) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}