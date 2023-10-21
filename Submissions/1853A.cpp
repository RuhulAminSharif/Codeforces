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
        ll a[n]; for(ll i=0; i<n; i++){cin >> a[i];}
        bool fg = true;
        for(ll i=0; i<n-1; i++){
            if(a[i]>a[i+1]){
                fg = false;
            }
        }
        /*
        1 1 -> 2 0
        1 2-> 2 1
        8 10-> 9 9 -> 10 8

      5+1/2  9 14-> 10 13 -> 11 12 -> 12 11
        */
        if(fg){
            ll d=-1;
            for(ll i=0; i<n-1; i++){
                if(d==-1){
                    d = a[i+1]-a[i];
                }else{
                    d = min(d, a[i+1]-a[i]);
                }
            }
            cout << d/2+1 << endl;
        }else{
            cout << 0 << endl;
        }
    }
    return 0;
}