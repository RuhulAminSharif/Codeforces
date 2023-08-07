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
        ll a[n], sum=0;
        for(ll i=0; i<n; i++){
            cin >> a[i];
            sum += a[i];
        }
        if(sum&1) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    return 0;
}