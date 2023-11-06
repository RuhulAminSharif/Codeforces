#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mx = 1e3+10;
ll parent[mx], _rank[mx];
vector<pair<ll,ll>>vec, vec2;
void make_Set(ll n)
{
    for(ll i=0; i<=n; i+=1)
    {
        parent[i] = i;
        _rank[i] = 0;
    }
}
ll find_parent(ll x)
{
    if(parent[x]==x) return x;
    return parent[x] = find_parent(parent[x]);
}
void unionByRank(ll u, ll v)
{
    ll x = find_parent(u);
    ll y = find_parent(v);
    if(x==y)
    {
        vec.push_back({u,v});
        return ;
    }
    if(_rank[x]==_rank[y])
    {
        parent[y] = x;
        _rank[x] += 1;
    }
    else if(_rank[x]<_rank[y])
    {
        parent[x] = y;
    }
    else
    {
        parent[y] = x;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n; cin >> n;
    make_Set(n);
    for(ll i=0; i<n-1; i+=1)
    {
        ll u, v; cin >> u >> v;
        unionByRank(u,v);
    }
    cout << vec.size() << endl;
    if(vec.size())
    {
        vector<ll>not_connected;
        for(int i=1; i<=n; i+=1)
        {
            if(parent[i]==i)
            {
                not_connected.push_back(i);
            }
        }
        for(ll i=1; i<not_connected.size(); i+=1)
        {
            cout << vec[i-1].first << " " << vec[i-1].second << " " << not_connected[0] << " " << not_connected[i] << endl;
        }
    }
    return 0;
}
