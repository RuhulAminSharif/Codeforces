#include<bits/stdc++.h>
using namespace std;
#define ll long long int
const ll mx = 3*1e4+10;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t=1LL;
    cin >> t;
    while(t--)
    {
        ll n; cin >> n;
        set<ll>st;
        for(ll i=0; i<n; i++){
            ll x; cin >> x;
            st.insert(x);
        }
        if((n-st.size())&1) cout << st.size()-1 << endl;
        else cout << st.size() << endl;
    }
    return 0;
}
