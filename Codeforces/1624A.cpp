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
        ll mx, mn, x;
        for(ll i=0; i<n; i++){
            cin >> x;
            if(i==0){
                mx = mn = x;
            }else{
                mx = max(mx,x);
                mn = min(mn,x);
            }
        }
        cout << mx-mn << endl;
    }
    return 0;
}