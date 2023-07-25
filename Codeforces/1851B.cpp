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
        ll a[n];
        vector<ll>e,o,ans(n);
        for(ll i=0; i<n; i++){
            cin >> a[i];
            if(a[i]%2==0) e.push_back(a[i]);
            else o.push_back(a[i]);
        }
        // cout << e.size() << " " << o.size();
        sort(e.begin(), e.end());
        sort(o.begin(), o.end());
        ll p=0, q=0;
        for(ll i=0; i<n; i++){
            if(a[i]%2==0){
                ans[i] = e[p++];
            }else{
                ans[i] = o[q++];
            }
        }
        bool fg= true;
        for(ll i=0; i<n-1; i++){
            if(ans[i]>ans[i+1]){
                fg = false;
            }
        }
        if(fg) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}