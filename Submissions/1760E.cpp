#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
void solve()
{
    ll n; cin >> n;
    ll a[n]; for(ll i=0; i<n; i++) cin >> a[i];
    ll cnt1 = count(a, a+n, 1), cnt0 = count(a, a+n, 0);
    if(cnt0==n || cnt1==n){
        cout << n-1 << endl;
        return ;
    }
    ll l=0, r=0;
    for(ll i=0; i<n; i++){
        if(a[i]==0){
            l=i;
            break;
        }
    }
    for(ll i=n-1; i>=0; i--){
        if(a[i]==1){
            r=i;
            break;
        }
    }
    ll ans = 0, cnt=0;
    for(ll i=0; i<n; i++){
        if(a[i]==0){
            ans += cnt;
        }else{
            cnt += 1;
        }
    }
    a[l]=1;
    cnt =0;
    ll temp =0;
    for(int i=0; i<n; i++){
        if(a[i]==0)
            temp+=cnt;
        else cnt++;
    }
    ans=max(ans, temp);
    a[l]=0;
    a[r]=0;
    cnt=0;
    temp =0;
    for(int i=0; i<n; i++){
        if(a[i]==0)
            temp+=cnt;
        else cnt++;
    }
    ans=max(ans, temp);
    cout << ans << endl;
    return ;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}