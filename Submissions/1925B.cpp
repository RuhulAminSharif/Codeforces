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
        ll x, n; cin >> x >> n;
        ll ans = 1;
        set<ll>st;
        for(ll i =1; i*i<=x; i++){
            if( x%i == 0){
                st.insert(i);
                st.insert(x/i);
            }
        }
        for(auto it : st){
            if((x/it)>=n) ans = it;
        }
        cout << ans << endl;
    }
    return 0;
}
