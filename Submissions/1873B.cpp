#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t, k=0; cin >> t;
    while(t--){
        ll n; cin >> n;
        ll a[n], ans=1; for(ll i=0; i<n; i++){
            cin >> a[i];
            ans *= a[i];
        }
        for(ll i=0; i<n; i++){
            a[i] +=1;
            ll tmp = 1;
            for(ll j=0; j<n; j++){
                tmp *= a[j];
            }
            ans = max(tmp, ans);
            a[i] -= 1;
        }
        cout << ans << endl;
    }
    return 0;
}