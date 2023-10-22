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
        ll n, a[3]={0}; cin >> n;
        for(ll i=0; i<n; i++){
            ll x; cin >> x;
            a[x] += 1;
        }
        bool fg;
        if((a[1]+2*a[2])&1){
            fg = false;
        }else{
            int sum = (a[1]+2*a[2])/2;
            if(sum%2==0 || (sum&1 && a[1])){
                fg = true;
            }else{
                fg = false;
            }
        }
        if(fg) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}