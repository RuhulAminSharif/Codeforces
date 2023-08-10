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
    for(ll i=1; i<=t; i++){
        ll n; cin >> n;
        vector<ll>adj[n+5];
        map<pair<ll,ll>, ll>mp;
        for(ll j=1; j<=n; j++){
            ll u, v, c; cin >> u >> v >> c;
            adj[u].push_back(v);
            adj[v].push_back(u);
            mp[{u,v}] = c;
        }
        ll ans1=0, ans2=0;
        ll present_city = 1, next_city = adj[1][0], temp;
        for(ll i=1; i<=n; i++){
            if(mp[{present_city, next_city}]==0){
                ans1 += mp[{next_city, present_city}];
            }
            temp = adj[next_city][0];
            if(temp==present_city){
                temp = adj[next_city][1];
            }
            present_city = next_city;
            next_city = temp;
        }

        present_city = 1, next_city = adj[1][1];
        for(ll i=1; i<=n; i++){
            if(mp[{present_city, next_city}]==0){
                ans2 += mp[{next_city, present_city}];
            }
            temp = adj[next_city][0];
            if(temp==present_city){
                temp = adj[next_city][1];
            }
            present_city = next_city;
            next_city = temp;
        }
        cout << "Case " << i << ": " << min(ans1,ans2) << endl;

    }   
    return 0;
}