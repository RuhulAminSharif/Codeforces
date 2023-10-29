#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll t=1;
    cin >> t;
    for(ll test=1; test<=t; test++){
        // cout << "Case " << test << " : ";
        ll n; cin >> n;
        ll a[n]; for(ll i=0; i<n; i++) cin >> a[i];
        map<ll,ll>mpp;
        for(auto u:a){
            mpp[u] += 1;
        }
        bool fg = true;
        if(mpp.size()>=3){
            fg = false;
        }
        if(mpp.size()==2){
            vector<ll>cnt;
            for(auto xx : mpp){
                cnt.push_back(xx.second);
            }
            sort(cnt.begin(), cnt.end());
            if(cnt[1]-cnt[0]>=2){
                fg = false;
            }
        }
        if(fg) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}