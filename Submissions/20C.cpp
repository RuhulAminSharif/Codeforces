#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mx = 1e5+5;
vector<pair<ll,ll>>adj[mx];
set<pair<ll,ll>>st;
vector<ll> dis(mx, LLONG_MAX), parent(mx, -1);
void path_print(ll node)
{
    if(parent[node]==-1){
        cout << node << " ";
        return;
    }
    path_print(parent[node]);
    cout << node << " ";
}
void dijkstra(ll source)
{
    st.insert({0, source});
    dis[source] = min(dis[source], 0LL);
    while(st.size()){
        ll node = st.begin()->second;
        ll cost = st.begin()->first;
        st.erase(st.begin());
        for(auto it : adj[node]){
            if(cost+it.second<dis[it.first]){
                if(dis[it.first]!=LLONG_MAX){
                    st.erase({dis[it.first], it.first});
                }
                dis[it.first]=cost+it.second;
                st.insert({cost+it.second,it.first});
                parent[it.first] = node;
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n, m; cin >> n >> m;
    for(ll i=0; i<m; i+=1)
    {
        ll u, v, w; cin >> u >> v >> w;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }
    dijkstra(1);
    if(parent[n]==-1) cout << -1 << " ";
    else path_print(n);
}