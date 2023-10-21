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
        ll a[n+1]; for(ll i=1; i<=n; i++) cin >> a[i];
        if(a[1]){
            cout << n+1;
            for(ll i=1; i<=n; i++) cout << " " << i;
            cout << endl;
        }else if(!a[n]){
            for(ll i=1; i<=n; i++) cout << i << " ";
            cout << n+1 << endl;
        }else{
            ll pos = -1;
            for (ll i = 1; i <= n - 1; i++) {
                if (a[i] == 0 && a[i + 1] == 1) {
                    pos = i;
                    break;
                }
            }
            for (ll i = 1; i <= pos; i++) cout << i << " ";
            cout << n + 1;
            for (ll i = pos + 1; i <= n; i++) cout << " " << i;
            cout << endl;
        }
    }
    return 0;
}