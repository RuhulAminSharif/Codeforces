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
        ll a[n];
        for(ll i=0; i<n; i++){
            cin >> a[i];
        }
        sort(a,a+n);
        bool fg = true;
        if(n==1){
            fg = true;
        }
        for(ll i=1; i<n; i++){
            if(a[i]==a[i-1]){
                fg = false;
            }
        }
        if(fg) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}