#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t=1LL;   cin >> t;
    while(t--){
        ll n, x; cin >> n >> x;
        if(n%x) cout << -1 << endl;
        else{
            ll ans[n+1];
            for(ll i=1; i<=n; i++) ans[i] = i;
            ans[1] = x; ans[n] = 1;
            while(x<n){
                for(ll i=(x<<1); i<=n; i+=x){
                    if(n%i==0){
                        ans[x] = i;
                        x = i;
                        break;
                    }
                }
            }
            for(ll i=1; i<=n; i++) cout << ans[i] << " ";
            cout << endl;
        }
    }
    return 0;
}
