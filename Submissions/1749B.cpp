#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t=1; cin >> t;
    while(t--){
        ll n, x, sum=0, mx=-1; cin >> n;
        ll a[n], b[n];
        for(ll i=0; i<n; i++){
            cin >> x;
            sum += x;
        }
        for(ll i=0; i<n; i++){
            cin >> x;
            sum += x;
            mx = max(mx,x);
        }
        cout << sum-mx << endl;
    }
    return 0;
}
