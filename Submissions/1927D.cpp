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
        ll a[n+5];
        for(ll i=1; i<=n; i++){
            cin >> a[i];
        }
        ll ans[n+5];
        ans[n] = n+1;
        for(ll i=n-1; i>=1; i--){
            if(a[i]==a[i+1]){
                ans[i] = ans[i+1];
            }
            else{
                ans[i] = i+1;
            }
        }
        ll q; cin >> q;
        cout << endl;
        while(q--){
            ll l, r; cin >> l >> r;
            if(ans[l]>r) cout << "-1 -1" << endl;
            else cout << l << " " << ans[l] << endl;
        }
        cout << endl;
    }
    return 0;
}
