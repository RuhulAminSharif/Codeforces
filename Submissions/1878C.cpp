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
        ll n, k, x; cin >> n >> k >> x;
        bool fg = true;
        if((k*(k+1)/2)>x){
            // cout << 2;
            fg = false;
        }else{
            ll p = (n*(n+1)/2);
            ll q = n-k;
            ll r = (q*(q+1)/2);
            if(p-r<x){
                // cout << 3;
                fg = false;
            }
        }
        if(fg) cout << "YES" << endl;
        else cout << "NO" << endl;
    
    }
    return 0;
}