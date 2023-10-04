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
        ll n; cin >> n;
        ll ans;
        for(ll i=0; i<n; i++){
            ll x; cin >> x;
            if(i==0) ans=x;
            else ans = __gcd(ans,x);
        }
        if(ans==1) cout << "yes" << endl;
        else cout << "no" << endl;
    }
    return 0;
}