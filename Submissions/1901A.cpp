#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t=1; cin >> t;
    while(t--){
        ll n, x; cin >> n >> x;
        ll a[n]; for(ll i=0; i<n; i++) cin >> a[i];
        vector<ll>ans;
        ans.push_back((a[0]-0));
        ans.push_back(2*(x-a[n-1]));
        for(ll i=0; i<n-1; i++){
            ans.push_back(a[i+1]-a[i]);
        }
        sort(ans.begin(), ans.end());
        if(n==1){
            cout << max(a[0],2*(x-a[0])) << endl;
        }
        else{
            cout << ans[ans.size()-1] << endl;
        }
    }
    return 0;
}
