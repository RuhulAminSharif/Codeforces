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
        ll n; cin >> n;
        ll a[n], b[n], cnt=0, mx = LLONG_MIN;
        for(ll i=0; i<n; i++) cin >> a[i];
        for(ll i=0; i<n; i++) cin >> b[i];
        for(ll i=0; i<n; i++) mx = max(mx, a[i]-b[i]);
        for(ll i=0; i<n; i++) cnt += mx == a[i]-b[i];
        cout << cnt << endl;
        for(ll i=0; i<n; i++){
            if(a[i]-b[i] == mx){
                cout << i+1 << " ";
            }
        }
        cout << endl;
    }
    return 0;
}