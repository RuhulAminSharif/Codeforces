#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
const ll mx = 1e4+7;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t=1; /// cin >> t;
    while(t--){
        ll n; cin >> n;
        set<ll>st;
        for(ll i=1; i<=n; i++){
            ll x; cin >> x;
            st.insert(x);
        }
        ll ans = 1;
        for(auto it : st){
            if(it==ans){
                ans += 1;
            }
            else{
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
