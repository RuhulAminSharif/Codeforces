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
        ll n, k; cin >> n >> k;
        ll a[n]; for(ll i=0; i<n; i++) cin >> a[i];
        if(is_sorted(a,a+n) || k>1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
