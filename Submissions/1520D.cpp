#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t; cin >> t;
    while(t--){
        ll n, cnt=0;
        cin >> n;
        map<ll,ll>mpp;
        for(ll i=1; i<=n; i++){
            ll x; cin >> x;
            mpp[x-i] += 1;
        }
        ll ans = 0;
        for(auto it : mpp){
            ll x = it.second;
            ans += (x*(x-1))/2;
        }
        cout << ans << endl;
    }
    return 0;
}
