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
        ll n, k; cin >> n >> k;
        bool fg = false;
        for(ll i=0; i<n; i++){
            ll x; cin >> x;
            if(x==k){
                fg = true;
            }
        }
        if(fg) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}