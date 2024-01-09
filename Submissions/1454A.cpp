#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
const ll mx = 1e5+7;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t = 1, test = 1;
    cin >> t;
    while(t--){
        ll n; cin >> n;
        for(ll i=2; i<=n; i++) cout << i << " ";
        cout << 1 << endl;
    }
    return 0;
}