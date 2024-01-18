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
    ll t=1; cin >> t;
    while(t--){
        ll l=LLONG_MIN, r=LLONG_MAX, a, x, n;
        cin >> n;
        vector<ll>notinclude;
        for(ll i=0; i<n; i++){
            cin >> a >> x;
            if(a==1){
                l = max(l, x);
            }
            if(a==2){
                r = min(r, x);
            }
            if(a==3){
                notinclude.push_back(x);
            }
        }
        ll exclude=0;
        for(auto it : notinclude){
            if(it>=l && it<=r){
                exclude++;
            }
        }
        cout << max(r-l+1-exclude, 0LL) << endl;
    }
    return 0;
}
