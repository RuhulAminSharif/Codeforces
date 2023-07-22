#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{
    ll n; cin >> n;
    vector<ll>vec(n+1,0);
    for(ll i=0; i<n; i++){
        ll x; cin >> x;
        vec[x]++;
    }
    for(ll i=1;i<=n; i++){
        if(vec[i]>=3){
            cout << i << endl;
            return ;
        }
    }
    cout << -1 << endl;
    return;
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