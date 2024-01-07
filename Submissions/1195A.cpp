#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t=1; /// cin >> t;
    while(t--){
        ll n, k;
        cin >> n >> k;
        ll a[k+1]={0};
        for(ll i=0; i<n; i++){
            ll x; cin >> x;
            a[x]++;
        }
        ll ans = 0;
        for(ll i=1; i<=k; i++){
            ans += (a[i]&1);
        }
        cout << n - ans/2 << endl;
    }
    return 0;
}
