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
        vector<pair<ll,ll>>v(n);
        for(ll i=0; i<n; i++) cin >> v[i].first;
        for(ll i=0; i<n; i++) cin >> v[i].second;
        sort(v.begin(), v.end());
        for(ll i=0; i<n; i++) cout << v[i].first << " ";
        cout << endl;
        for(ll i=0; i<n; i++) cout << v[i].second << " ";
        cout << endl;
    }
    return 0;
}
