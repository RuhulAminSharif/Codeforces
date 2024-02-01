#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long long int
#define endl "\n"
template<class T> using ordered_set= tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t; cin >> t;
    while(t--){
        ll n; cin >> n;
        vector<pair<ll,ll>>v(n);
        for(ll i=0; i<n; i++){
            cin >> v[i].first >> v[i].second;
        }
        sort(v.begin(), v.end());
        ll ans = 0;
        ordered_set<ll>st;
        for(auto it : v){
            ans += st.size()-st.order_of_key(it.second);
            st.insert(it.second);
        }
        cout << ans << endl;
    }
    return 0;
}
