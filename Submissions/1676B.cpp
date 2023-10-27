#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t=1; cin >> t;
    for(ll test=1; test<=t; test++){
        ll n,ans=0; cin >> n; ll a[n], mn=LLONG_MAX; for(ll i=0; i<n; i++){cin >> a[i]; mn= min(mn,a[i]);}
        for(ll i=0; i<n; i++){ans+=a[i]-mn;}
        cout << ans << endl;
    }
}