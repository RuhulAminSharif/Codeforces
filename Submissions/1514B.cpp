#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mod = 1e9+7;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t; cin >> t;
    while(t--){
        ll n, k; cin >> n >> k;
        ll ans=1;
        for(ll i=1; i<=k; i++){
            ans = (ans%mod*n%mod)%mod;
        }
        cout << ans%mod << endl;
    }
}