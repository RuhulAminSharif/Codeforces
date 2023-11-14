#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
const ll mx = 1e5+5;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t=1LL; cin >> t;
    while(t--){
        ll n; cin >> n;
        if((n&(n-1))) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}
