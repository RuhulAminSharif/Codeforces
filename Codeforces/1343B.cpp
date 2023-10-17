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
        ll n, k=0; cin >> n;
        if((n/2)&1){
            cout << "NO" << endl;
        }else{
            cout << "YES" << endl;
            ll sum = 0, k=2;
            for(ll i=1; i<=n/2; i++){
                cout << k << " ";
                sum += k;
                k += 2;
            }
            k = 1;
            for(ll i=1; i<n/2; i++){
                cout << k << " ";
                sum -= k;
                k += 2;
            }
            cout << sum << endl;
        }
    }
    return 0;
}