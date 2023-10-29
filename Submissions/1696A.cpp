#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t; cin >> t;
    while(t--){
        ll n, z, ans=0; cin >> n >> z;
        ll a[n];
        for(ll i=0; i<n; i++){
            cin >> a[i];
            ans = max(ans, a[i]|z);
        }
        cout << ans << endl;
    }
    return 0;
}