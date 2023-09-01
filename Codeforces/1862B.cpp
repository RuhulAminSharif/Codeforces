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
        ll n, tmp; cin >> n;
        vector<ll>ans;
        for(ll i=0; i<n; i++){
            ll x; cin >> x;
            if(i){
                if(tmp<=x){
                    ans.push_back(x);
                }else{
                    ans.push_back(x);
                    ans.push_back(x);
                }
            }else{
                ans.push_back(x);
            }
            tmp = x;
        }
        cout << ans.size() << endl;
        for(auto x : ans){
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}