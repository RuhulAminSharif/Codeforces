#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t=1; /// cin >> t;
    for(ll test=1; test<=t; test++){
        ll n; cin >> n;
        ll a[n];
        for(ll i=0; i<n; i++) cin >> a[i];
        ll ans = 1, cnt=1;
        for(ll i=1; i<n; i++){
            if(a[i]>a[i-1]){
                cnt += 1;
            }
            else{
                ans = max(cnt, ans);
                cnt = 1;
            }
        }
        ans = max(ans, cnt);
        cout << ans << endl;
    }

    return 0;
}