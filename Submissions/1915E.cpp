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
        for(ll i=0; i<n; i++){
            cin >> a[i];
            if(i&1) a[i] *= -1;
        }
        bool fg = false;
        set<ll>st;
        st.insert(0);
        ll sum = 0;
        for(ll i=0; i<n; i++){
            sum += a[i];
            if(st.find(sum) != st.end()){
                fg = true;
                break;
            }
            st.insert(sum);
        }
        if(fg) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
