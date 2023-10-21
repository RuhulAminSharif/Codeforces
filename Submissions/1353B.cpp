#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t; cin >> t;
    while(t--){
        ll n, k; cin >> n >> k;
        vector<ll>a(n),b(n);
        for(ll i=0; i<n; i++) cin >> a[i];
        for(ll i=0; i<n; i++) cin >> b[i];
        sort(a.begin(), a.end());
        sort(b.rbegin(), b.rend());
        ll ans=0;
        for(ll i=0; i<n; i++){
            if(i<k) ans += max(a[i],b[i]);
            else ans += a[i];
        }
        cout << ans << endl;
    }
    return 0;
}