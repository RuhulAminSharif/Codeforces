#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
const ll mod = 32768;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t=1; /// cin >> t;
    for(ll test =1; test<=t; test++){
        ll n; cin >> n;
        while(n--){
            ll x; cin >> x;
            ll ans = 15;
            for(ll i=0; i<=15; i++){
                ll tmp = x+i;
                ll cnt=i;
                while(tmp && tmp%32768){
                    tmp = ((2%mod)*(tmp%mod))%mod;
                    cnt += 1;
                }
                ans = min(ans,cnt);
            }
            cout << ans << " ";
        }
        cout << endl;

    }
    return 0;
}