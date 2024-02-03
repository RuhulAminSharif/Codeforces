#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t=1; cin >> t;
    while(t--){
        ll n; cin >> n;
        ll x, sum=0;
        for(ll i=1; i<n; i++){
            cin >> x;
            sum += x;
        }
        sum *= (-1);
        cout << sum << endl;
    }
    return 0;
}
