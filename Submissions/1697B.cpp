#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
const ll mx = 150000+5;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll n, q; cin >> n >> q;
    ll a[n], sum[n]={0};
    for(ll i=0; i<n; i++){
        cin >> a[i];
        if(i)sum[i] =  sum[i-1]+a[i];
        else sum[0] = a[i];
    }
    sort(a,a+n);
    for(ll i=0; i<n; i++){
        if(i)sum[i] =  sum[i-1]+a[i];
        else sum[0] = a[i];
    }
    while(q--){
        ll x, y; cin >> x >> y;
        ll tmp;
        if(x!=n) tmp = sum[n-x+y-1]-sum[n-x-1];
        else tmp = sum[n-x+y-1];
        cout << tmp << endl;
    }
    return 0;
}
