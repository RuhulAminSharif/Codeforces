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
    ll a[n], ans=0, sum=0, tmp=0;
    for(ll i=0; i<n; i++){
        cin >> a[i];
        sum += a[i];
    }
    sort(a,a+n);
    for(ll i=n-1; i>=0; i--){
        if(tmp>sum) break;
        tmp += a[i];
        sum -= a[i];
        ans += 1;
    }
    cout << ans << endl;
    return 0;
}
