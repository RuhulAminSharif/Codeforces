#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
const ll mx = 1e5+5;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n; cin >> n;
    ll a[n], cnt=1, ans=1;
    for(ll i=0; i<n; i++){
        cin >> a[i];
    }
    for(ll i=1; i<n; i++){
        if(a[i]>=a[i-1]) cnt += 1;
        else ans = max(ans, cnt), cnt=1;
    }
    ans = max(ans, cnt);
    cout << ans << endl;
    return 0;
}
