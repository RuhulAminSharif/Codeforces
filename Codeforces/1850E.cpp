#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
signed main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t; cin >> t;
    while(t--){
        ll n, c; cin >> n >> c;
        ll w2 = n, w = 0;
        for(ll i=0; i<n; i++){
            ll x; cin >> x;
            w += x;
            c -= x*x;
        }
        w /= n;
        c /= (4*n);
        ll ans = abs((-w+sqrt((w*w)+4*c))/2);
        cout << ans << endl;
    }
    return 0;
}