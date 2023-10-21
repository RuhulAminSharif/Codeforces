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
        ll even=0, odd=0;
        for(ll i=0; i<n; i++){
            ll x; cin >> x;
            if(x&1){
                odd += x;
            }else{
                even += x;
            }
        }
        if(even>odd){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}