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
        ll n, f, a, b; cin >> n >> f >> a >> b;
        ll arr[n];
        for(ll i=0; i<n; i++){
            cin >> arr[i];
        }
        ll last = 0;
        bool fg = true;
        for (ll i = 0; i < n; i++) {
            ll On = 1LL * a * (arr[i] - last);
            ll OffOn = b;
            ll req = min(On, OffOn);

            f -= req;
            last = arr[i];

            if (f <= 0) {
                fg = false;
                break;
            }
        }
        if(fg)  cout << "YES" << endl;
        else    cout << "NO" << endl;
    }
    return 0;
}
