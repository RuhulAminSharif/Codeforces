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
        vector<pair<ll,ll>>vec;
        for(ll i=0; i<n; i++){
            ll x, y; cin >> x >> y;
            vec.push_back({x,y});
        }
        ll ans = LLONG_MAX;
        // sort(vec.begin(), vec.end());
        for(ll i=0; i<vec.size(); i++){
            ans = min(ans, vec[i].first+(vec[i].second-1)/2);
        }
        cout << ans << endl;
    }
    return 0;
}