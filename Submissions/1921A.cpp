#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t=1; cin >> t;
    while(t--){
        ll x, y; cin >> x >> y;
        ll ans;
        for(ll i=0; i<3; i++){
            ll a, b; cin >> a >> b;
            if(x==a){
                ll tmp = labs(y-b);
                ans = tmp * tmp;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
