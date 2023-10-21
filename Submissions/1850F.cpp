#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve(void)
{
    map<ll,ll>mp;
    ll n; cin >> n;
    vector<ll>vec(n+1,0);
    for(ll i=0; i<n; i++){
        ll x; cin >> x;
        if(x<=n){
            mp[x] += 1;
        }
    }
    for(ll i=1; i<=n; i++){
        if(mp[i]!=0){
            for(ll j=i; j<=n; j+=i){
                vec[j] += mp[i];
            }
        }
    }
    cout << *max_element(vec.begin(), vec.end()) << endl;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t; cin >> t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}