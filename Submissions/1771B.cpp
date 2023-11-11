#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
const ll mx = 1e5+5;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t=1LL; cin >> t;
    while(t--){
        ll n, m; cin >> n >> m;
        ll a[n+5];
        for(ll i=1; i<=n; i++) a[i] = n+1;
        for(ll i=0; i<m; i++){
            ll x, y; cin >> x >> y;
            if(x>y) swap(x,y);
            a[x] = min(a[x], y);
        }
        ll ans=0;
        for(ll i=n-1; i>=1; i--) a[i] = min(a[i], a[i+1]);
        for(ll i=1; i<=n; i++)
            ans += a[i]-i;
        cout << ans << endl;
    }
    return 0;
}
