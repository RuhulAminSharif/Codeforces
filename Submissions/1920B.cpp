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
        ll n, k, x, sum=0; cin >> n >> k >> x;
        vector<ll>vec(n+1), preSum(n+1);
        for(ll i=1; i<=n; i++){
            cin >> vec[i];
            sum += vec[i];
        }
        sort(vec.begin()+1, vec.end(), greater<ll>());

        for(ll i=1; i<=n; i++){
            preSum[i] = preSum[i-1]+vec[i];
        }
        ll ans = LLONG_MIN;
        for(ll i=0; i<=k; i++){
            ll tmp = preSum[min(n,i+x)]-preSum[i];
            ans = max(ans, sum-2*tmp);
            sum -= vec[i+1];
        }
        cout << ans << endl;
    }
    return 0;
}
