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
        ll a, b, c; cin >> a >> b >> c;
        ll x = abs(a-b);
        long double q = x/2.0;
        ll ans = ceil(q/c);
        cout << ans << endl;
    }
    return 0;
}