#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const ll mx = 150000+5;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t; cin >> t;
    while(t--){
        ll n, mn=1e9, pos=-1; cin >> n;
        ll a[n+5];
        for(ll i=1; i<=n; i++){
            cin >> a[i];
            if(a[i]<mn){
                pos = i;
                mn = a[i];
            }
        }
        bool fg=true;
        for(ll i=pos+1; i<=n; i++){
            if(a[i-1]>a[i]){
                fg = false;
                break;
            }
        }
        if(fg) cout << pos-1 << endl;
        else if(mn==1e9) cout << 0 << endl;
        else cout << -1 << endl;
    }
    return 0;
}
