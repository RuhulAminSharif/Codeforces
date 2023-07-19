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
        ll n, x=0; cin >> n;
        ll a[n]; for(ll i=0; i<n; i++) cin >> a[i];
        bool fg = false;
        for(ll i=0; i<=(n-2); i++){
            if(a[i]<a[i+1]){
                x=1;
                while(a[i+1]>=a[i] && i<=(n-2)){
                    i++;
                }
                if(i==(n-1)){
                    cout << "YES" << endl;
                    fg = true;
                    break;
                }else{
                    cout << "NO" << endl;
                    fg = true;
                    break;
                }
            }
        }
        if(x==0 && !fg){
            cout << "YES" << endl;
        }
    }
    return 0;
}