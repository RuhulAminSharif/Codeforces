#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve(void)
{
    ll n; cin >> n;
    ll a[n];
    for(ll i=0; i<n; i++){
        cin >> a[i];
    }
    vector<ll>divi;
    for(ll i=1; i*i<=n; i++){
        if(!(n%i)){
            divi.push_back(i);
            if((n/i)!=i){
                divi.push_back(n/i);
            }
        }
    }
    ll ans = 0;
    for(ll i=0; i<divi.size(); i++){
        ll allgcd = 0;
        for(ll j=0; j<divi[i]; j++){
            ll gcd = 0;
            for(ll k=j; k+divi[i]<n; k += divi[i]){
                gcd = __gcd(gcd, llabs(a[k]-a[k+divi[i]]));
            }
            allgcd = __gcd(allgcd, gcd);
        }
        ans += (allgcd!=1);
    }
    cout << ans << endl;
    return ;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t=1; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
