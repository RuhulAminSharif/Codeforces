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
        ll n, x, ans=0; cin >> n;
        for(ll i=0; i<n; i++) {cin >> x; ans |= x;}
        cout << ans << endl;
    }
    return 0;
}