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
    for(ll k=1; k<=t; k++){
        ll n; cin >> n;
        for(ll i=0; i<n; i++){
            for(ll j=0; j<n; j++){
                cout << "*";
            }
            cout << endl;
        }
        if(k!=t) cout << endl;
    }
    return 0;
}