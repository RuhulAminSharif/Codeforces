#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve(void)
{
    ll n, k; cin >> n >> k;
    vector<ll>a(n);
    for(ll i=0; i<n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    ll ans=1, temp=1;
    for(ll i=0; i<n-1; i++){
        if(abs(a[i] - a[i + 1]) <= k) {
            temp++;
            ans = max(ans, temp);
        } else {
            temp = 1;
        }
    }
    cout << n-ans << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t; cin >> t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}