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
        ll n; cin >> n;
        vector<ll> arr(n), cnt(n+1);
        for(ll i=0; i<n; i++){
            cin >> arr[i];
            cnt[arr[i]] += 1;
        }
        ll ans = 0, lesser = 0;
        for(ll i=0; i<=n; i++){
            ll x = cnt[i];
            ans += (x*(x-1)*(x-2))/(1*2*3);
            ans += ((x*(x-1))/2) * lesser;
            lesser += x;
        }
        cout << ans << endl;
    }
    return 0;
}
