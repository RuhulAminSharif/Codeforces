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
        ll a[n], ans;
        for(ll i=0; i<n; i++){
            cin >> a[i];
            if(i && a[i]!=a[i-1]){
                ans = i+1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}