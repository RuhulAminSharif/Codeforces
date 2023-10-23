#include"bits/stdc++.h"
using namespace std;
#define ll long long int
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    ll t=1;
    cin >> t;
    for(ll test=1; test<=t; test++){
        ll n; cin >> n;
        vector<ll>a(n);
        for(ll i=0; i<n; i++){
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        ll ans = a[1]-a[0];
        for(int i=1; i<n-1; i++){
            ans = min(ans, a[i+1]-a[i]);
        }
        cout << ans << endl;
    }
    return 0;
}
