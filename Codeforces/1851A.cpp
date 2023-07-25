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
        ll n, m, k, h; cin >> n >> m >> k >> h;
        ll a[n];
        for(ll i=0; i<n; i++){
            cin >> a[i];
        }
        ll p=0, ans=0;
        set<ll>st;
        for(ll p=0; p<n; p++){
            for(ll i=1; i<=m; i++){
                ll tmp = ans;
                for(ll j=i+1; j<=m; j++){
                    if(abs(i-j)*k==abs(a[p]-h)){
                        // cout << "**" << a[p];
                        ans += 1;
                        // st.insert(a[p]);
                        break;
                    }
                }
                if(ans!=tmp){
                    break;
                }
            }
        }
        // cout << st.size();
        // cout << "**"<<ans << endl;
        cout << ans << endl;
    }
    return 0;
}