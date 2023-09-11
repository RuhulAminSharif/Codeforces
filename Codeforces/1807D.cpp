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
        ll n, q; cin >> n >> q;
        ll a[n], sum=0, tmp[n]={0}; 
        for(ll i=0; i<n; i++){
            cin >> a[i];
            sum += a[i];
            if(i==0) tmp[i]=a[i];
            else tmp[i]=tmp[i-1]+a[i];
        }
        while(q--){
            ll l, r, k, ans;
            cin >> l >> r >> k;
            if(l!=1) ans = (r-l+1)*k+sum-tmp[r-1]+tmp[l-2];
            else ans = (r-l+1)*k+sum-tmp[r-1];
            if(ans%2==0) cout << "NO" << endl;
            else cout << "YES" << endl;
        }
    }
    return 0;
}