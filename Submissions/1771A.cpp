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
    ll t=1; cin >> t;
    while(t--){
        ll n; cin >> n;
        ll a[n];
        map<ll,ll>mpp;
        for(ll i=0; i<n; i++){
            cin >> a[i];
            mpp[a[i]]++;
        }
        sort(a,a+n);
        if(a[0]==a[n-1]) cout << n*(n-1) << endl;
        else cout << 2*mpp[a[0]]*mpp[a[n-1]] << endl;
    }
    return 0;
}
