#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
const ll mod = 1e9+7;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t= 1;    cin >> t;
    while(t--){
        ll n, k; cin >> n >> k;
        vector<ll>ans(n+1);
        ll low = 1, high = n;
        for(ll i=1; i<=k; i++){
            for(ll j=i; j<=n; j+=k){
                if(i&1) ans[j] = low++;
                else ans[j] = high--;
            }
        }
        for(ll i=1; i<=n; i++) cout << ans[i] << " ";
        cout << endl;
    }
    return 0;
}
