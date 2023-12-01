#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t; cin >> t;
    while(t--){
        ll n; cin >> n;
        ll cnt[10]={0};
        while(n--){
            ll x; cin >> x;
            cnt[x%10]++;
        }
        vector<ll>vec;
        for(ll i=0; i<10; i++){
            for(ll j=0; j<min(cnt[i],3LL); j++){
                vec.push_back(i);
            }
        }
        bool fg = false;
        for(ll i=0; i<vec.size(); i++){
            for(ll j=i+1; j<vec.size(); j++){
                for(ll k=j+1; k<vec.size(); k++){
                    if((vec[i]+vec[j]+vec[k])%10==3){
                        fg = true;
                    }
                }
            }
        }
        if(fg) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
