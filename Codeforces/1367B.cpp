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
        ll n, p=0, q=0; cin >> n;
        for(ll i=0; i<n; i++){
            ll x; cin >> x;
            if(i%2 != x%2){
                if(i%2){
                    p += 1;
                }else{
                    q += 1;
                }
            }
        }
        if(p!=q){
            cout << -1 << endl;
        }else{
            cout << p << endl;
        }
    }
    return 0;
}